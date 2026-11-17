/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$get_Hold
UnityEngine_Transform_o* Dino_BusSand_App_UI_KitPrefabs__get_Hold (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$get_Hold
   UnityEngine_Transform_o* Dino_BusSand_App_UI_KitPrefabs__get_Hold (const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_KitPrefabs__get_Hold_2181d88(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_04cac4f8;
  if ((bRam0000000004f9b934 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad610);
    bRam0000000004f9b934 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar7 = *(long *)puVar1;
  uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if (*(int *)(lVar7 + 0xe4) == 0) {
                    /* try { // try from 02281e18 to 02381eaf has its CatchHandler @ 02281e18
                       catch() { ... } // from try @ 02281e18 with catch @ 02281e18
                       catch() { ... } // from try @ 02281f9c with catch @ 02281e18 */
    thunk_FUN_0218fdac(lVar7);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  puVar3 = PTR_DAT_04cad610;
  if ((uVar5 & 1) == 0) {
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c20cc(lVar4,*(undefined8 *)puVar3,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_GameObject__SetActive_43c1408(lVar4,0,0);
    UnityEngine_Object__set_hideFlags_43c8654(lVar4,0x3d,0);
    if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 02281eb0 to 02381ebb has its CatchHandler @ 02281f9c */
    uVar5 = UnityEngine_Application__get_isPlaying_4351eec(0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      UnityEngine_Object__DontDestroyOnLoad_43c8450(lVar4,0);
    }
    uVar8 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar4);
      lVar4 = *(long *)puVar2;
    }
    puVar6 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18);
    *puVar6 = uVar8;
    thunk_FUN_02134474(puVar6,uVar8);
  }
  else if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  return *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
}

