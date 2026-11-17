/* IL2CPP: Dino.BusSand.App.Fx$$get_Root
UnityEngine_Transform_o* Dino_BusSand_App_Fx__get_Root (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Fx$$get_Root
   UnityEngine_Transform_o* Dino_BusSand_App_Fx__get_Root (const MethodInfo* method); */

undefined8 Dino_BusSand_App_Fx__get_Root_2150538(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_04cab448;
                    /* try { // try from 02250540 to 0235071f has its CatchHandler @ 02250540
                       catch() { ... } // from try @ 02250540 with catch @ 02250540
                       catch() { ... } // from try @ 02250a88 with catch @ 02250540
                       catch() { ... } // from try @ 02250b78 with catch @ 02250540 */
  if ((bRam0000000004f9b7bc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab448);
    FUN_02132f7c(PTR_DAT_04cab450);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab458);
    bRam0000000004f9b7bc = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar7 = *(long *)puVar1;
  uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar7);
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
  puVar3 = PTR_DAT_04cab458;
  if ((uVar5 & 1) != 0) {
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c20cc(lVar4,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__DontDestroyOnLoad_43c8450(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar8 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar7);
      lVar7 = *(long *)puVar2;
    }
    puVar6 = (undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
    *puVar6 = uVar8;
    thunk_FUN_02134474(puVar6,uVar8);
    uVar8 = UnityEngine_GameObject__AddComponent_object__275a54c
                      (lVar4,*(undefined8 *)PTR_DAT_04cab450);
    puVar6 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *puVar6 = uVar8;
    thunk_FUN_02134474(puVar6,uVar8);
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  return *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
}

