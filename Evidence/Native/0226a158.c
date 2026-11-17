/* IL2CPP: Dino.BusSand.App.GameApp$$<Awake>b__58_0
void Dino_BusSand_App_GameApp___Awake_b__58_0 (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$<Awake>b__58_0
   void Dino_BusSand_App_GameApp___Awake_b__58_0 (Dino_BusSand_App_GameApp_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_GameApp___Awake_b__58_0_216a158(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_DAT_04cab1e8;
  if ((bRam0000000004f9b882 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    bRam0000000004f9b882 = 1;
  }
  uVar8 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  puVar2 = PTR_DAT_04cab1e8;
  if ((bRam0000000004f9b7a2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cab1f8);
    FUN_02132f7c(PTR_DAT_04cab200);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cab210);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab218);
    FUN_02132f7c(PTR_DAT_04cab220);
    FUN_02132f7c(PTR_DAT_04cab228);
    bRam0000000004f9b7a2 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b888 == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    cRam0000000004f9b888 = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  uVar9 = **(undefined8 **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
  puVar1 = PTR_DAT_04cab208;
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar4 = *(long *)PTR_DAT_04cab208;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  puVar3 = PTR_DAT_04cab1f0;
  if (**(long **)(lVar4 + 0xb8) == 0) {
    uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab200);
    System_Func_object__object__object____ctor_37a6ad0(uVar9,0,*(undefined8 *)PTR_DAT_04cab220,0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    **(undefined8 **)(lVar4 + 0xb8) = uVar9;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar9);
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  if (*(long *)(*(long *)(lVar4 + 0xb8) + 0x20) == 0) {
    uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab1f8);
    System_Func_object__object____ctor_37a3a24(uVar9,0,*(undefined8 *)PTR_DAT_04cab218,0);
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar3;
    }
    puVar6 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x20);
    *puVar6 = uVar9;
    thunk_FUN_02134474(puVar6,uVar9);
    lVar4 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_04cab228;
  puVar1 = PTR_DAT_04caa070;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_AudioHub__Ensure_2373284(0);
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_43c20cc(lVar4,*(undefined8 *)puVar3,0);
  if ((lVar4 != 0) && (lVar7 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0), lVar7 != 0))
  {
    UnityEngine_Transform__SetParent_43d1e34(lVar7,uVar8,0,0);
    uVar8 = UnityEngine_GameObject__AddComponent_object__275a54c
                      (lVar4,*(undefined8 *)PTR_DAT_04cab210);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    if (cRam0000000004f9b889 == '\0') {
      FUN_02132f7c(PTR_DAT_04cab1e8);
      cRam0000000004f9b889 = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    **(undefined8 **)(lVar4 + 0xb8) = uVar8;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar2 + 0xb8) >> 0xc & 0x3f),
                   (*(ulong *)(*(long *)puVar2 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

