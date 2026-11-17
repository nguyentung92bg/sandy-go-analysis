/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerHallButton.<PlayProcess>d__16$$MoveNext
bool Dino_BusSand_App_UI_ClimbTowerHallButton__PlayProcess_d__16__MoveNext (Dino_BusSand_App_UI_ClimbTowerHallButton__PlayProcess_d__16_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerHallButton.<PlayProcess>d__16$$MoveNext
   bool Dino_BusSand_App_UI_ClimbTowerHallButton__PlayProcess_d__16__MoveNext
   (Dino_BusSand_App_UI_ClimbTowerHallButton__PlayProcess_d__16_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_ClimbTowerHallButton__PlayProcess_d__16__MoveNext_21a0b58(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((bRam0000000004f9ba1e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cae6e8);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cae758);
    FUN_02132f7c(PTR_DAT_04cae760);
    FUN_02132f7c(PTR_DAT_04cae768);
    bRam0000000004f9ba1e = 1;
  }
  puVar4 = PTR_DAT_04cae6e8;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = Dino_BusSand_App_UI_ClimbTowerHallButton__get_Alive_219f1e4();
      if (((uVar6 & 1) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
        lVar7 = *(long *)puVar4;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar4;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if ((lVar7 == 0) ||
           (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), lVar7 == 0))
        goto LAB_022a0fd0;
        uVar6 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar7,0);
        puVar3 = PTR_DAT_04cab1e8;
        if ((uVar6 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cae760,0);
          lVar7 = *(long *)puVar4;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar4;
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
          if (lVar7 == 0) {
LAB_022a0fd0:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar7 = UnityEngine_Component__GetComponent_object__26f97e8
                            (lVar7,*(undefined8 *)PTR_DAT_04cada30);
          puVar2 = PTR_DAT_04ca9ae8;
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
          }
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
          puVar5 = PTR_DAT_04cae758;
          uVar10 = _UNK_00e203ec;
          if ((uVar6 & 1) != 0) {
            if (lVar7 == 0) goto LAB_022a0fd0;
            uVar8 = UnityEngine_Animation__get_Item_4334ee8(lVar7,*(undefined8 *)PTR_DAT_04cae758,0)
            ;
            uVar6 = UnityEngine_TrackedReference__op_Inequality_43c6a68(uVar8,0,0);
            if ((uVar6 & 1) != 0) {
              lVar9 = UnityEngine_Animation__get_Item_4334ee8(lVar7,*(undefined8 *)puVar5,0);
              if (lVar9 == 0) goto LAB_022a0fd0;
              uVar10 = UnityEngine_AnimationState__get_length_4337218(lVar9,0);
            }
          }
          lVar9 = *(long *)puVar2;
          *(undefined4 *)(param_1 + 0x28) = uVar10;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
          puVar2 = PTR_DAT_04cae758;
          if ((uVar6 & 1) != 0) {
            if (lVar7 == 0) goto LAB_022a0fd0;
            uVar8 = UnityEngine_Animation__get_Item_4334ee8(lVar7,*(undefined8 *)PTR_DAT_04cae758,0)
            ;
            uVar6 = UnityEngine_TrackedReference__op_Inequality_43c6a68(uVar8,0,0);
            if ((uVar6 & 1) != 0) {
              UnityEngine_Animation__Stop_4334660(lVar7,0);
              UnityEngine_Animation__Play_4335164(lVar7,*(undefined8 *)puVar2,0);
              lVar7 = *(long *)puVar4;
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar7 = *(long *)puVar4;
              }
              *(undefined1 *)(*(long *)(lVar7 + 0xb8) + 0x24) = 0;
            }
          }
          lVar7 = *(long *)(param_1 + 0x20);
          if (lVar7 == 0) goto LAB_022a0fd0;
          if (*(char *)(lVar7 + 0x19) != '\0') {
            uVar10 = Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaimCount_222a188
                               (lVar7,0xffffffff,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            uVar10 = Dino_BusSand_App_UI_ClimbTowerHallButton__SliderFill_21a02dc(uVar10,1);
            lVar7 = *(long *)(param_1 + 0x20);
            *(undefined4 *)(param_1 + 0x2c) = uVar10;
            if (lVar7 == 0) goto LAB_022a0fd0;
            *(undefined1 *)(lVar7 + 0x19) = 0;
            uVar8 = Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaimCount_222a188(lVar7,0,0);
            uVar10 = Dino_BusSand_App_UI_ClimbTowerHallButton__SliderFill_21a02dc(uVar8,0);
            lVar7 = *(long *)puVar3;
            *(undefined4 *)(param_1 + 0x30) = uVar10;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cae768,0);
            *(undefined4 *)(param_1 + 0x34) = 0;
            goto LAB_022a0e88;
          }
          goto LAB_022a0f30;
        }
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x19) = 0;
      }
      lVar7 = *(long *)puVar4;
      goto LAB_022a0fa4;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(float *)(param_1 + 0x34) < 0.5) {
LAB_022a0e88:
      puVar4 = PTR_DAT_04cae6e8;
      if (*(int *)(*(long *)PTR_DAT_04cae6e8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = Dino_BusSand_App_UI_ClimbTowerHallButton__get_Alive_219f1e4();
      if ((uVar6 & 1) != 0) {
        fVar14 = *(float *)(param_1 + 0x34);
        fVar11 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
        fVar14 = fVar14 + fVar11;
        iVar1 = *(int *)(*(long *)puVar4 + 0xe4);
        fVar12 = fVar14 + fVar14;
        *(float *)(param_1 + 0x34) = fVar14;
        fVar11 = 1.0;
        if (fVar12 <= 1.0) {
          fVar11 = fVar12;
        }
        fVar14 = 0.0;
        if (0.0 <= fVar12) {
          fVar14 = fVar11;
        }
        fVar12 = *(float *)(param_1 + 0x2c);
        fVar13 = *(float *)(param_1 + 0x30);
        fVar11 = 0.0;
        if (0.0 <= fVar14) {
          fVar11 = fVar14;
        }
        if (iVar1 == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_ClimbTowerHallButton__SetFill_21a043c
                  (fVar12 + (fVar13 - fVar12) * fVar11);
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
    }
LAB_022a0f30:
    fVar11 = *(float *)(param_1 + 0x28) + -0.5;
    if (0.0 < fVar11) {
      uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(fVar11,uVar8,0);
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar8);
      *(undefined4 *)(param_1 + 0x10) = 2;
      return 1;
    }
  }
  lVar7 = *(long *)PTR_DAT_04cae6e8;
LAB_022a0fa4:
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_UI_ClimbTowerHallButton__UpdateState_219f894();
  return 0;
}

