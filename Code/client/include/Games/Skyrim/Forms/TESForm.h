#pragma once

#if TP_SKYRIM

#include <Games/Skyrim/Components/BaseFormComponent.h>

enum FormType : uint8_t
{
    Book = 27,
    Container = 28,
    Ammo = 42,
    Npc = 43,
    LeveledCharacter = 44,
    Character = 62,
    QuestItem = 77,
    Count = 0x87
};

struct BGSSaveFormBuffer;
struct BGSLoadFormBuffer;

struct TESForm : BaseFormComponent
{
    struct ChangeFlags
    {
        uint32_t flags{};
        uint64_t unk4{};
        uint32_t unkC{};
    };

    static TESForm* GetById(uint32_t aId);

    virtual void sub_4();
    virtual void sub_5();
    virtual void sub_6();
    virtual void sub_7();
    virtual void sub_8();
    virtual void sub_9();
    virtual bool MarkChanged(uint32_t aChangeFlag);
    virtual bool UnsetChanged(uint32_t aChangeFlag);
    virtual void sub_C();
    virtual void sub_D();
    virtual void Save(BGSSaveFormBuffer* apBuffer) const noexcept;
    virtual void Load(BGSLoadFormBuffer* apBuffer);
    virtual void sub_10();
    virtual void sub_11();
    virtual void sub_12();
    virtual void InitializeComponents(); // Called after Load
    virtual void sub_14();
    virtual FormType GetFormType();
    virtual void sub_16();
    virtual void sub_17();
    virtual void sub_18();
    virtual void sub_19();
    virtual void sub_1A();
    virtual void sub_1B();
    virtual void sub_1C();
    virtual void sub_1D();
    virtual void sub_1E();
    virtual void sub_1F();
    virtual void sub_20();
    virtual void sub_21();
    virtual void sub_22();
    virtual void sub_23();
    virtual void sub_24();
    virtual void sub_25();
    virtual void sub_26();
    virtual void sub_27();
    virtual void sub_28();
    virtual void sub_29();
    virtual void sub_2A();
    virtual void sub_2B();
    virtual void sub_2C();
    virtual void sub_2D();
    virtual const char* GetName() const noexcept;
    virtual void CopyFrom(TESForm* apForm);
    virtual void sub_30();
    virtual void sub_31();
    virtual void sub_32();
    virtual void sub_33();
    virtual void sub_34();
    virtual void sub_35();
    virtual void sub_36();
    virtual void sub_37();
    virtual void sub_38();

    //void CopyFromEx(TESForm* rhs);
    void Save_Reversed(uint32_t aChangeFlags, Buffer::Writer& aWriter);
    void SetSkipSaveFlag(bool aSet) noexcept;
    uint32_t GetChangeFlags() const noexcept;

    uintptr_t unk4;
    uint32_t flags;
    uint32_t formID;
    uint16_t unk10;
    FormType formType;
    uint8_t padForm;
};

#if TP_PLATFORM_64
static_assert(sizeof(TESForm) == 0x20);
#else
static_assert(sizeof(TESForm) == 0x14);
#endif

#endif
