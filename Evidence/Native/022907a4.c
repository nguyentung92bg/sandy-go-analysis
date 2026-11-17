/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel.<Born>d__20$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleResultPanel__Born_d__20__MoveNext (Dino_BusSand_App_UI_BattleRoyaleResultPanel__Born_d__20_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel.<Born>d__20$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleResultPanel__Born_d__20__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleResultPanel__Born_d__20_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_BattleRoyaleResultPanel__Born_d__20__MoveNext_21907a4
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((bRam0000000004f9b9a6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadf38);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cab478);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cadf48);
    FUN_02132f7c(PTR_DAT_04cadf68);
    FUN_02132f7c(PTR_DAT_04cae018);
    FUN_02132f7c(PTR_DAT_04cae020);
    FUN_02132f7c(PTR_DAT_04cae028);
    FUN_02132f7c(PTR_DAT_04cadf70);
    FUN_02132f7c(PTR_DAT_04cadf78);
    FUN_02132f7c(PTR_DAT_04cae030);
    FUN_02132f7c(PTR_DAT_04cadfb8);
    bRam0000000004f9b9a6 = 1;
  }
  iVar1 = *(int *)(param_4 + 0x10);
  lVar7 = *(long *)(param_4 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar7 != 0) {
      *(undefined1 *)(lVar7 + 0x72) = 1;
      return 0;
    }
    goto LAB_02290ecc;
  }
  if (iVar1 == 1) {
    fVar11 = *(float *)(param_4 + 0x58);
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
LAB_02290b04:
    puVar2 = PTR_DAT_04ca9ae8;
    if (fVar11 < *(float *)(param_4 + 0x30)) {
      uVar4 = *(undefined8 *)(param_4 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
      if ((uVar5 & 1) != 0) {
        fVar13 = *(float *)(param_4 + 0x58);
        fVar11 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
        fVar13 = fVar13 + fVar11;
        *(float *)(param_4 + 0x58) = fVar13;
        fVar11 = (float)Dino_BusSand_App_UI_BattleRoyaleUi__OutBack_219d0e4
                                  (fVar13 / *(float *)(param_4 + 0x30),0);
        lVar6 = *(long *)(param_4 + 0x38);
        uVar4 = *(undefined8 *)(param_4 + 0x40);
        fVar13 = *(float *)(param_4 + 0x48);
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65d = '\x01';
        }
        puVar3 = PTR_DAT_04caa208;
        if (lVar6 != 0) {
          uVar9 = **(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
          fVar14 = (float)uVar4;
          fVar12 = (float)((ulong)uVar4 >> 0x20);
          fVar12 = fVar12 + ((float)((ulong)uVar9 >> 0x20) - fVar12) * fVar11;
          UnityEngine_Transform__set_localPosition_43cfda8
                    (CONCAT44(fVar12,fVar14 + ((float)uVar9 - fVar14) * fVar11),fVar12,
                     fVar13 + fVar11 * (*(float *)(*(undefined8 **)
                                                    (*(long *)PTR_DAT_04caa208 + 0xb8) + 1) - fVar13
                                       ),lVar6,0);
          lVar6 = *(long *)(param_4 + 0x38);
          uVar4 = *(undefined8 *)(param_4 + 0x4c);
          fVar13 = *(float *)(param_4 + 0x54);
          if (cRam0000000004f9b65e == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65e = '\x01';
          }
          if ((lVar6 != 0) &&
             (uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc),
             fVar14 = (float)uVar4, fVar12 = (float)((ulong)uVar4 >> 0x20),
             fVar12 = fVar12 + ((float)((ulong)uVar9 >> 0x20) - fVar12) * fVar11,
             UnityEngine_Transform__set_localScale_43d1be0
                       (CONCAT44(fVar12,fVar14 + ((float)uVar9 - fVar14) * fVar11),fVar12,
                        fVar13 + fVar11 * (*(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14) -
                                          fVar13),lVar6,0), lVar7 != 0)) {
            uVar4 = *(undefined8 *)(lVar7 + 0x50);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
            if ((uVar5 & 1) != 0) {
              lVar7 = *(long *)(lVar7 + 0x50);
              Dino_BusSand_App_UI_BattleRoyaleUi__OutCubic_219d19c
                        (*(float *)(param_4 + 0x58) / *(float *)(param_4 + 0x30),0);
              if (lVar7 == 0) goto LAB_02290ecc;
              UnityEngine_CanvasGroup__set_alpha_467ad3c(lVar7,0);
            }
            *(undefined8 *)(param_4 + 0x18) = 0;
            thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),0);
            *(undefined4 *)(param_4 + 0x10) = 1;
            return 1;
          }
        }
        goto LAB_02290ecc;
      }
    }
    *(undefined8 *)(param_4 + 0x38) = 0;
    thunk_FUN_02134474((undefined8 *)(param_4 + 0x38),0);
    *(undefined8 *)(param_4 + 0x40) = 0;
    *(undefined8 *)(param_4 + 0x48) = 0;
    *(undefined8 *)(param_4 + 0x50) = 0;
    if (lVar7 == 0) goto LAB_02290ecc;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    puVar2 = PTR_DAT_04cadf68;
    if (lVar7 == 0) goto LAB_02290ecc;
    *(undefined1 *)(lVar7 + 0x72) = 0;
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(lVar7,*(undefined8 *)puVar2,1,0);
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(lVar7,*(undefined8 *)PTR_DAT_04cadf48,1,0);
    Dino_BusSand_App_UI_BattleRoyaleUi__Sample_219cf34
              (*(undefined8 *)(lVar7 + 0x48),*(undefined8 *)PTR_DAT_04cae030,0,0);
    uVar4 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar7,*(undefined8 *)PTR_DAT_04cae018,0);
    puVar2 = PTR_DAT_04ca9ae8;
    uVar9 = *(undefined8 *)(param_4 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(param_4 + 0x28) == 0) goto LAB_02290ecc;
        uVar9 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_4 + 0x28),0);
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar6);
        }
        lVar6 = UnityEngine_Object__Instantiate_object__28052a0
                          (uVar9,uVar4,*(undefined8 *)PTR_DAT_04cab478);
        plVar8 = (long *)(lVar7 + 0x78);
        *plVar8 = lVar6;
        thunk_FUN_02134474(plVar8,lVar6);
        if (*plVar8 == 0) goto LAB_02290ecc;
        UnityEngine_Object__set_name_43c72ec(*plVar8,*(undefined8 *)PTR_DAT_04cae028,0);
        if (*plVar8 == 0) goto LAB_02290ecc;
        UnityEngine_GameObject__SetActive_43c1408(*plVar8,1,0);
        if (*plVar8 == 0) goto LAB_02290ecc;
        lVar6 = UnityEngine_GameObject__get_transform_43c1048(*plVar8,0);
        if ((*(long *)(param_4 + 0x28) == 0) ||
           (UnityEngine_Transform__get_position_43d0e48(*(long *)(param_4 + 0x28),0), lVar6 == 0))
        goto LAB_02290ecc;
        UnityEngine_Transform__set_position_43d0f1c(lVar6,0);
        if (*plVar8 == 0) goto LAB_02290ecc;
        lVar6 = UnityEngine_GameObject__get_transform_43c1048(*plVar8,0);
        if ((*(long *)(param_4 + 0x28) == 0) ||
           (UnityEngine_Transform__get_rotation_43d133c(*(long *)(param_4 + 0x28),0), lVar6 == 0))
        goto LAB_02290ecc;
        UnityEngine_Transform__set_rotation_43d13f8(lVar6,0);
        if (*plVar8 == 0) goto LAB_02290ecc;
        lVar6 = UnityEngine_GameObject__get_transform_43c1048(*plVar8,0);
        plVar8 = (long *)(param_4 + 0x38);
        *plVar8 = lVar6;
        thunk_FUN_02134474(plVar8,lVar6);
        if (*plVar8 == 0) goto LAB_02290ecc;
        uVar10 = UnityEngine_Transform__get_localPosition_43cfce8(*plVar8,0);
        *(undefined4 *)(param_4 + 0x40) = uVar10;
        *(undefined4 *)(param_4 + 0x44) = param_2;
        *(undefined4 *)(param_4 + 0x48) = param_3;
        if (*(long *)(param_4 + 0x38) == 0) goto LAB_02290ecc;
        uVar10 = UnityEngine_Transform__get_localScale_43d1b0c(*(long *)(param_4 + 0x38),0);
        *(undefined4 *)(param_4 + 0x4c) = uVar10;
        *(undefined4 *)(param_4 + 0x50) = param_2;
        *(undefined4 *)(param_4 + 0x54) = param_3;
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(*(undefined8 *)(lVar7 + 0x50),0,0);
        if ((uVar5 & 1) != 0) {
          if (*(long *)(lVar7 + 0x50) == 0) goto LAB_02290ecc;
          UnityEngine_CanvasGroup__set_alpha_467ad3c(0,*(long *)(lVar7 + 0x50),0);
        }
        fVar11 = 0.0;
        *(undefined4 *)(param_4 + 0x58) = 0;
        goto LAB_02290b04;
      }
    }
  }
  uVar4 = *(undefined8 *)(lVar7 + 0x50);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(lVar7 + 0x50) == 0) {
LAB_02290ecc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_CanvasGroup__set_alpha_467ad3c(0x3f800000,*(long *)(lVar7 + 0x50),0);
  }
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(lVar7,*(undefined8 *)PTR_DAT_04cadf78,1,0);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(lVar7,*(undefined8 *)PTR_DAT_04cadf70,1,0);
  if (*(int *)(*(long *)PTR_DAT_04cadf38 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_UI_BattleRoyaleResultPanel__CoinStackVibrate_21903e8();
  Dino_BusSand_App_UI_UIPanel__Run_2200f98(lVar7,uVar4,0);
  uVar4 = Dino_BusSand_App_UI_BattleRoyaleResultPanel__Sfx_2190344
                    (_UNK_00e2043c,*(undefined8 *)PTR_DAT_04cae020);
  Dino_BusSand_App_UI_UIPanel__Run_2200f98(lVar7,uVar4,0);
  uVar10 = Dino_BusSand_App_UI_BattleRoyaleUi__Play_219a580
                     (*(undefined8 *)(lVar7 + 0x48),*(undefined8 *)PTR_DAT_04cae030,0);
  if (*(char *)(lVar7 + 0x70) != '\0') {
    uVar4 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar7,*(undefined8 *)PTR_DAT_04cadfb8,0);
    uVar9 = *(undefined8 *)(lVar7 + 0x68);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa200);
    }
    uVar9 = System_Math__Min_4831124(0x7fffffff,uVar9,0);
    uVar4 = Dino_BusSand_App_UI_BattleRoyaleUi__CountNumber_219d2d8
                      (_UNK_00e20994,_UNK_00e1feb0,uVar4,0,uVar9,0,0);
    Dino_BusSand_App_UI_UIPanel__Run_2200f98(lVar7,uVar4,0);
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
  UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar10,uVar4,0);
  *(undefined8 *)(param_4 + 0x18) = uVar4;
  thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),uVar4);
  *(undefined4 *)(param_4 + 0x10) = 2;
  return 1;
}

