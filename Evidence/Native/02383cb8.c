/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$Release
void Dino_BusSand_App_UI_KitTopBar__Release (Dino_BusSand_App_UI_KitTopBar_o* __this, int64_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02383f10) */
/* WARNING: Removing unreachable block (ram,0x02390c50) */
/* WARNING: Removing unreachable block (ram,0x02390c54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$Release
   void Dino_BusSand_App_UI_KitTopBar__Release (Dino_BusSand_App_UI_KitTopBar_o* __this, int64_t
   amount, const MethodInfo* method); */

long Dino_BusSand_App_UI_KitTopBar__Release_2283cb8(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  
  puVar2 = PTR_DAT_04caa200;
                    /* try { // try from 02383cc4 to 02483ccf has its CatchHandler @ 02383e8c */
  if ((bRam0000000004f9c152 & 1) == 0) {
                    /* try { // try from 02383ce8 to 02483cef has its CatchHandler @ 02383e84 */
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c152 = 1;
  }
  puVar3 = PTR_DAT_04cad4c0;
                    /* try { // try from 02383d00 to 02483d03 has its CatchHandler @ 02383e78 */
                    /* try { // try from 02383d04 to 02483d13 has its CatchHandler @ 02383e80 */
  lVar8 = *(long *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = System_Math__Max_4830fd4(0,lVar8 - param_2,0);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  Dino_BusSand_App_UI_KitTopBar__Refresh_2283510(param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cb4e70;
  uVar11 = _UNK_00e2065c;
  uVar1 = _UNK_00e204e8;
                    /* try { // try from 02383d6c to 02483d8f has its CatchHandler @ 02383ea0 */
  if ((bRam0000000004f9c1bf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cb4e78);
    FUN_02132f7c(PTR_DAT_04cb4e80);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb4e88);
    FUN_02132f7c(PTR_DAT_04cb4e70);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c1bf = 1;
  }
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar8,0);
  puVar2 = PTR_DAT_04ca9ae8;
  if (lVar8 != 0) {
    puVar9 = (undefined8 *)(lVar8 + 0x10);
    *puVar9 = uVar4;
    thunk_FUN_02134474(puVar9,uVar4);
    lVar5 = *(long *)puVar2;
    uVar4 = *puVar9;
    *(undefined4 *)(lVar8 + 0x18) = uVar11;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
    if ((uVar6 & 1) != 0) {
      return 0;
    }
    uVar4 = *puVar9;
    if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Tween__KillAll_2161a90(uVar4,0);
    uVar4 = *puVar9;
    if (*(int *)(*(long *)PTR_DAT_04cad7b8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    auVar13 = Dino_BusSand_App_UI_KitAdopt__OwnerScale_227e1c0(uVar4);
    if ((auVar13._0_8_ & 0xff) == 0) {
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      lVar5 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
      uVar10 = *(undefined4 *)(lVar5 + 0xc);
      uVar11 = *(undefined4 *)(lVar5 + 0x10);
      uVar12 = *(undefined4 *)(lVar5 + 0x14);
    }
    else {
      uVar11 = auVar13._8_4_;
      uVar10 = auVar13._4_4_;
      uVar12 = auVar13._12_4_;
    }
    *(undefined4 *)(lVar8 + 0x1c) = uVar10;
    *(undefined4 *)(lVar8 + 0x20) = uVar11;
    *(undefined4 *)(lVar8 + 0x24) = uVar12;
    if (*(long *)(lVar8 + 0x10) != 0) {
      UnityEngine_Transform__set_localScale_43d1be0(*(long *)(lVar8 + 0x10),0);
      uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
      System_Action_float____ctor_35f1448(uVar4,lVar8,*(undefined8 *)PTR_DAT_04cb4e88,0);
      uVar7 = *(undefined8 *)(lVar8 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar2 = PTR_DAT_04cac1e8;
      if ((bRam0000000004f9c1bd & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caa210);
        FUN_02132f7c(PTR_DAT_04cb4ce0);
        FUN_02132f7c(PTR_DAT_04cac1e8);
        bRam0000000004f9c1bd = 1;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar8 = Dino_BusSand_App_Tween__Value_2160f64(uVar1,uVar4,0);
      if (((lVar8 != 0) &&
          (lVar8 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar8,1,0), lVar8 != 0)) &&
         (lVar8 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar8,uVar7,0), lVar8 != 0)) {
        lVar8 = Dino_BusSand_App_Tween__OnDone_2160edc(lVar8,0,0);
        if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Application__get_isPlaying_4351eec(0);
        puVar2 = PTR_DAT_04cb4ce0;
        if ((uVar6 & 1) != 0) {
          lVar5 = *(long *)PTR_DAT_04cb4ce0;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar5 = *(long *)puVar2;
          }
          if (*(char *)(*(long *)(lVar5 + 0xb8) + 1) == '\0') {
            return lVar8;
          }
        }
        if (lVar8 != 0) {
          Dino_BusSand_App_Tween__Kill_2160f04(lVar8,1,0);
          return lVar8;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

