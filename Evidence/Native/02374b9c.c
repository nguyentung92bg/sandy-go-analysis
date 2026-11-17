/* IL2CPP: Dino.BusSand.App.Meta.StoreReview$$OpenStorePage
void Dino_BusSand_App_Meta_StoreReview__OpenStorePage (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StoreReview$$OpenStorePage
   void Dino_BusSand_App_Meta_StoreReview__OpenStorePage (const MethodInfo* method); */

void Dino_BusSand_App_Meta_StoreReview__OpenStorePage_2274b9c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04caa210;
  if ((bRam0000000004f9c114 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cb4830);
    bRam0000000004f9c114 = 1;
  }
  puVar2 = PTR_DAT_04cb4830;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Application__get_identifier_43526b4(0);
  lVar4 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,uVar3,0);
  uVar3 = 0;
  if ((bRam0000000004fa5a69 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210,0);
    FUN_02132f7c(PTR_DAT_04cf5680);
    FUN_02132f7c(PTR_DAT_04cd5630);
    bRam0000000004fa5a69 = 1;
    uVar3 = extraout_x1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if (lVar4 == 0) {
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else if (*(int *)(lVar4 + 0x10) == 0) {
    uVar3 = System_UIntPtr__op_Explicit_488617c(1,0);
    uVar3 = System_UIntPtr__op_Explicit_4886184(uVar3,0);
    uStack_30 = 0;
    uStack_28 = 0;
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_43c6140(&uStack_30,uVar3,0,0);
    uStack_48 = uStack_28;
    uStack_50 = uStack_30;
  }
  else {
    if (cRam0000000004fa1b52 == '\0') {
      FUN_02132f7c(PTR_DAT_04cc73d8,uVar3);
      cRam0000000004fa1b52 = '\x01';
    }
    uStack_40 = System_String__GetRawStringData_46cfab8(lVar4,0);
    uStack_38 = (ulong)*(uint *)(lVar4 + 0x10);
    uVar3 = System_ReadOnlySpan_char___GetPinnableReference_2de139c
                      (&uStack_40,*(undefined8 *)PTR_DAT_04cf5680);
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_43c6140
              (&uStack_50,uVar3,uStack_38 & 0xffffffff,0);
  }
  if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (pcRam0000000004fa5b18 == (code *)0x0) {
    pcRam0000000004fa5b18 = (code *)FUN_02132f40(&UNK_00e5e6a0);
  }
  (*pcRam0000000004fa5b18)(&uStack_50);
  return;
}

