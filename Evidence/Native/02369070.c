/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$Ensure
void Dino_BusSand_App_Meta_MonetizationSettings__Ensure (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$Ensure
   void Dino_BusSand_App_Meta_MonetizationSettings__Ensure (const MethodInfo* method); */

void Dino_BusSand_App_Meta_MonetizationSettings__Ensure_2269070(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_04cacfd8;
  if ((bRam0000000004f9c0ac & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cacfd8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb4668);
    FUN_02132f7c(PTR_DAT_04cb4670);
    FUN_02132f7c(PTR_DAT_04cb4678);
    FUN_02132f7c(PTR_DAT_04cb4680);
    bRam0000000004f9c0ac = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar6 = *(long *)puVar1;
  uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar6);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar7 = UnityEngine_Resources__Load_object__2891e2c
                    (*(undefined8 *)PTR_DAT_04cb4678,*(undefined8 *)PTR_DAT_04cb4668);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar3);
    lVar3 = *(long *)puVar2;
  }
  puVar5 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
  *puVar5 = uVar7;
  thunk_FUN_02134474(puVar5,uVar7);
  uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Debug__LogError_4361614(*(undefined8 *)PTR_DAT_04cb4680,0);
    uVar7 = UnityEngine_ScriptableObject__CreateInstance_object__28ad0cc
                      (*(undefined8 *)PTR_DAT_04cb4670);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar3);
      lVar3 = *(long *)puVar2;
    }
    puVar5 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
    *puVar5 = uVar7;
    thunk_FUN_02134474(puVar5,uVar7);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_MonetizationSettings__Rebuild_22692f8();
  puVar2 = PTR_DAT_04cacfd8;
  if ((bRam0000000004f9c0ad & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04cacfd8);
    FUN_02132f7c(PTR_DAT_04caabd0);
    bRam0000000004f9c0ad = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9c123 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfd8);
    cRam0000000004f9c123 = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x28);
  if (*(int *)(*(long *)PTR_DAT_04cac450 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac450);
  }
  Dino_BusSand_App_CrashContext__Key_216f9dc(*(undefined8 *)PTR_DAT_04caabd0,uVar7,0);
  return;
}

