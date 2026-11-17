/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$PlayBump
void Dino_BusSand_App_UI_HudPanel__PlayBump (UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02383f10) */
/* WARNING: Removing unreachable block (ram,0x02390c50) */
/* WARNING: Removing unreachable block (ram,0x02390c54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$PlayBump
   void Dino_BusSand_App_UI_HudPanel__PlayBump (UnityEngine_Transform_o* t, const MethodInfo*
   method); */

long Dino_BusSand_App_UI_HudPanel__PlayBump_230ecd4(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c534 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb5050);
    bRam0000000004f9c534 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  lVar8 = 0;
  if ((uVar6 & 1) != 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar8 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cb5050,0);
  }
  puVar3 = PTR_DAT_04cad4c0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  puVar2 = PTR_DAT_04cb4e70;
  uVar12 = _UNK_00e208d0;
  uVar1 = _UNK_00e20104;
  if ((uVar6 & 1) == 0) {
    lVar8 = param_1;
  }
  if ((bRam0000000004f9c1bf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208,0,0,0);
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
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar4,0);
  puVar2 = PTR_DAT_04ca9ae8;
  if (lVar4 != 0) {
    plVar10 = (long *)(lVar4 + 0x10);
    *plVar10 = lVar8;
    thunk_FUN_02134474(plVar10,lVar8);
    lVar8 = *(long *)puVar2;
    lVar9 = *plVar10;
    *(undefined4 *)(lVar4 + 0x18) = uVar12;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
    if ((uVar6 & 1) != 0) {
      return 0;
    }
    lVar8 = *plVar10;
    if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Tween__KillAll_2161a90(lVar8,0);
    lVar8 = *plVar10;
    if (*(int *)(*(long *)PTR_DAT_04cad7b8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    auVar14 = Dino_BusSand_App_UI_KitAdopt__OwnerScale_227e1c0(lVar8);
    if ((auVar14._0_8_ & 0xff) == 0) {
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      lVar8 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
      uVar11 = *(undefined4 *)(lVar8 + 0xc);
      uVar12 = *(undefined4 *)(lVar8 + 0x10);
      uVar13 = *(undefined4 *)(lVar8 + 0x14);
    }
    else {
      uVar12 = auVar14._8_4_;
      uVar11 = auVar14._4_4_;
      uVar13 = auVar14._12_4_;
    }
    *(undefined4 *)(lVar4 + 0x1c) = uVar11;
    *(undefined4 *)(lVar4 + 0x20) = uVar12;
    *(undefined4 *)(lVar4 + 0x24) = uVar13;
    if (*(long *)(lVar4 + 0x10) != 0) {
      UnityEngine_Transform__set_localScale_43d1be0(*(long *)(lVar4 + 0x10),0);
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
      System_Action_float____ctor_35f1448(uVar5,lVar4,*(undefined8 *)PTR_DAT_04cb4e88,0);
      uVar7 = *(undefined8 *)(lVar4 + 0x10);
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
      lVar8 = Dino_BusSand_App_Tween__Value_2160f64(uVar1,uVar5,0);
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
          lVar4 = *(long *)PTR_DAT_04cb4ce0;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar4 = *(long *)puVar2;
          }
          if (*(char *)(*(long *)(lVar4 + 0xb8) + 1) == '\0') {
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

