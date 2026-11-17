/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$SetupActivity
void Dino_BusSand_App_UI_MainHudPanel__SetupActivity (Dino_BusSand_App_UI_MainHudPanel_o* __this, System_String_o* node, int32_t act, System_String_o* lockToastKey, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$SetupActivity
   void Dino_BusSand_App_UI_MainHudPanel__SetupActivity (Dino_BusSand_App_UI_MainHudPanel_o* __this,
   System_String_o* node, int32_t act, System_String_o* lockToastKey, const MethodInfo* method); */

void Dino_BusSand_App_UI_MainHudPanel__SetupActivity_22fd19c
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined8 param_5,
               int param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  float *pfVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  float fVar20;
  undefined4 uStack_74;
  
  puVar2 = PTR_DAT_04cb7af0;
  if ((bRam0000000004f9c4b4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cae520);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb7af8);
    FUN_02132f7c(PTR_DAT_04cb7b00);
    FUN_02132f7c(PTR_DAT_04cb7af0);
    FUN_02132f7c(PTR_DAT_04cb7a38);
    FUN_02132f7c(PTR_DAT_04cadcd0);
    FUN_02132f7c(PTR_DAT_04cb0f88);
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04cae730);
    FUN_02132f7c(PTR_DAT_04cadce8);
    FUN_02132f7c(PTR_DAT_04cb7b08);
    FUN_02132f7c(PTR_DAT_04cad4e8);
    FUN_02132f7c(PTR_DAT_04cadc88);
    FUN_02132f7c(PTR_DAT_04cadcf8);
    FUN_02132f7c(PTR_DAT_04cadd00);
    FUN_02132f7c(PTR_DAT_04cb0f58);
    FUN_02132f7c(PTR_DAT_04cae708);
    FUN_02132f7c(PTR_DAT_04cadc90);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c4b4 = 1;
  }
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar7,0);
  puVar2 = PTR_DAT_04ca9ae8;
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x10) = param_7;
    thunk_FUN_02134474((undefined8 *)(lVar7 + 0x10),param_7);
    lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_4,param_5,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
    if ((uVar9 & 1) != 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar5 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
    puVar4 = PTR_DAT_04cae520;
    if (*(int *)(*(long *)PTR_DAT_04cae520 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cae520);
    }
    iVar6 = Dino_BusSand_App_UI_MainHudPanel__UnlockLevel_22fdb48(param_6);
    *(int *)(lVar7 + 0x18) = iVar6;
    if (iVar5 < iVar6) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = Dino_BusSand_App_UI_MainHudPanel__ShouldShowLocked_22fdc8c(param_6,iVar5,iVar6);
      if ((uVar9 & 1) == 0) {
        if ((lVar8 != 0) &&
           (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0), lVar7 != 0)) {
          if ((bRam0000000004fa8360 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
            bRam0000000004fa8360 = 1;
          }
          if (lVar7 != 0) {
            lVar8 = *(long *)(lVar7 + 0x10);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
            }
            if (pcRam0000000004fa8430 == (code *)0x0) {
              pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
            }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8430)(lVar8,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_023fdb2c;
      }
    }
    if ((lVar8 != 0) &&
       (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0), lVar10 != 0)) {
      UnityEngine_GameObject__SetActive_43c1408(lVar10,1,0);
      fVar20 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar8,0);
      if (cRam0000000004f9b65d == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
      puVar3 = PTR_DAT_04caa208;
      pfVar15 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      if ((param_3 - pfVar15[2]) * (param_3 - pfVar15[2]) +
          (fVar20 - *pfVar15) * (fVar20 - *pfVar15) +
          (param_2 - pfVar15[1]) * (param_2 - pfVar15[1]) < _UNK_00e1fea0) {
        if (cRam0000000004f9b65e == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65e = '\x01';
          pfVar15 = *(float **)(*(long *)puVar3 + 0xb8);
        }
        UnityEngine_Transform__set_localScale_43d1be0(pfVar15[3],pfVar15[4],pfVar15[5],lVar8,0);
      }
      lVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cadc80,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
      if ((uVar9 & 1) != 0) {
        return;
      }
      lVar11 = *(long *)puVar4;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar11 = *(long *)puVar4;
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
      if (lVar11 != 0) {
        if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
          uVar9 = 0;
          uVar16 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
          do {
            if (uVar16 <= uVar9) goto LAB_023fdb30;
            if (lVar10 == 0) goto LAB_023fdb2c;
            uVar12 = UnityEngine_Transform__Find_43d4bec
                               (lVar10,*(undefined8 *)(lVar11 + 0x20 + uVar9 * 8),0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            Dino_BusSand_App_UI_MainHudPanel__SetActive_22fcb10(uVar12,0);
            uVar16 = (ulong)*(uint *)(lVar11 + 0x18);
            uVar9 = uVar9 + 1;
          } while ((long)uVar9 < (long)(int)*(uint *)(lVar11 + 0x18));
        }
        if (lVar10 != 0) {
          uVar12 = UnityEngine_Transform__Find_43d4bec(lVar10,*(undefined8 *)PTR_DAT_04cb0f88,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar4);
          }
          Dino_BusSand_App_UI_MainHudPanel__SetActive_22fcb10(uVar12,0);
          lVar11 = UnityEngine_Transform__Find_43d4bec(lVar10,*(undefined8 *)PTR_DAT_04cb0f58,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
          lVar19 = 0;
          if ((uVar9 & 1) != 0) {
            if (lVar11 == 0) goto LAB_023fdb2c;
            lVar19 = UnityEngine_Component__GetComponent_object__26f97e8
                               (lVar11,*(undefined8 *)PTR_DAT_04cad788);
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar19,0,0);
          if ((uVar9 & 1) != 0) {
            if (lVar19 == 0) goto LAB_023fdb2c;
            UnityEngine_Behaviour__set_enabled_43bc50c(lVar19,1,0);
          }
          if (iVar6 <= iVar5) {
            puVar17 = (undefined8 *)PTR_DAT_04cadce8;
            if (param_6 != 5) {
              puVar17 = (undefined8 *)PTR_DAT_04cadc90;
            }
            puVar1 = (undefined8 *)PTR_DAT_04cadcd0;
            if (param_6 != 2) {
              puVar1 = puVar17;
            }
            uVar12 = UnityEngine_Transform__Find_43d4bec(lVar10,*puVar1,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            Dino_BusSand_App_UI_MainHudPanel__SetActive_22fcb10(uVar12,1);
            puVar2 = PTR_DAT_04cad4e8;
            puVar17 = (undefined8 *)PTR_DAT_04cae708;
            if ((param_6 != 2) && (puVar17 = (undefined8 *)puVar2, param_6 != 5)) {
              if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              puVar17 = (undefined8 *)PTR_DAT_04cadd00;
              uVar9 = Dino_BusSand_App_Lang__Has_215fb88(*(undefined8 *)PTR_DAT_04cadd00,0);
              if ((uVar9 & 1) == 0) {
                puVar17 = (undefined8 *)puVar2;
              }
            }
            uVar14 = *puVar17;
            lVar10 = *(long *)PTR_DAT_04ca9d18;
            lVar7 = *(long *)(lVar10 + 0x38);
            if (lVar7 == 0) {
              FUN_0216b4cc(lVar10);
              lVar7 = *(long *)(lVar10 + 0x38);
            }
            lVar7 = *(long *)(lVar7 + 0x10);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_0216b470();
            }
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar7 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_0216b470();
            }
            uVar18 = **(undefined8 **)(lVar7 + 0xb8);
            if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
            }
            uVar14 = Dino_BusSand_App_Lang__Get_215f9c0(uVar14,uVar18,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            Dino_BusSand_App_UI_MainHudPanel__SetTexts_22fbba8(uVar12,uVar14);
            uVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
            puVar2 = PTR_DAT_04cb7a38;
            lVar7 = *(long *)PTR_DAT_04cb7a38;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar7);
              lVar7 = *(long *)puVar2;
            }
            puVar17 = *(undefined8 **)(lVar7 + 0xb8);
            lVar10 = puVar17[2];
            if (lVar10 == 0) {
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar7);
                puVar17 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
              }
              uVar14 = *puVar17;
              lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
              System_Action___ctor_47b5ed0(lVar10,uVar14,*(undefined8 *)PTR_DAT_04cb7af8,0);
              plVar13 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
              *plVar13 = lVar10;
              thunk_FUN_02134474(plVar13,lVar10);
            }
            Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8
                      (uVar12,lVar10,1,*(undefined8 *)PTR_DAT_04cad948,0);
            if (param_6 != 4) {
              return;
            }
            uVar12 = UnityEngine_Component__GetComponent_object__26f97e8
                               (lVar8,*(undefined8 *)PTR_DAT_04cada30);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            lVar7 = Dino_BusSand_App_UI_MainHudPanel__AnimLoop_22fb7d0
                              (0x3fc00000,0x40600000,uVar12,*(undefined8 *)PTR_DAT_04cb7b08);
            uVar9 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_4,0,0);
            if ((uVar9 & 1) == 0) {
              return;
            }
            if (lVar7 == 0) {
              thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
              uVar14 = thunk_FUN_0216e89c();
              uVar12 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
              System_NullReferenceException___ctor_483267c(uVar14,uVar12,0);
            }
            else {
              uVar9 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
              if ((uVar9 & 1) != 0) {
                if ((bRam0000000004fa84ef & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cf7890);
                  bRam0000000004fa84ef = 1;
                }
                if (param_4 != 0) {
                  lVar8 = *(long *)(param_4 + 0x10);
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_4,0)
                    ;
                  }
                  if (pcRam0000000004fa8560 == (code *)0x0) {
                    pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                  }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000004fa8560)(lVar8,lVar7);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              thunk_FUN_021985a8(PTR_DAT_04caa3a8);
              uVar14 = thunk_FUN_0216e89c();
              uVar12 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
              System_ArgumentException___ctor_47b660c(uVar14,uVar12,0);
            }
            uVar12 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar14,uVar12);
          }
          uVar12 = UnityEngine_Transform__Find_43d4bec(lVar10,*(undefined8 *)PTR_DAT_04cadc88,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar4);
          }
          Dino_BusSand_App_UI_MainHudPanel__SetActive_22fcb10(uVar12,1);
          uVar12 = UnityEngine_Transform__Find_43d4bec(lVar10,*(undefined8 *)PTR_DAT_04cae730,0);
          plVar13 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
          uStack_74 = *(undefined4 *)(lVar7 + 0x18);
          lVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_74);
          if (plVar13 != (long *)0x0) {
            if ((lVar10 != 0) &&
               (lVar11 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0))
            {
              uVar12 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar12,0);
            }
            if ((int)plVar13[3] != 0) {
              plVar13[4] = lVar10;
              thunk_FUN_02134474(plVar13 + 4,lVar10);
              if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar14 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cadcf8,plVar13,0)
              ;
              Dino_BusSand_App_UI_MainHudPanel__SetTexts_22fbba8(uVar12,uVar14);
              uVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
              uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
              System_Action___ctor_47b5ed0(uVar14,lVar7,*(undefined8 *)PTR_DAT_04cb7b00,0);
              Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8
                        (uVar12,uVar14,1,*(undefined8 *)PTR_DAT_04cad948,0);
              return;
            }
LAB_023fdb30:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
        }
      }
    }
  }
LAB_023fdb2c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

