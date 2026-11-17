/* IL2CPP: Dino.BusSand.App.UI.ActivityQuitFlow$$ShowSingle
bool Dino_BusSand_App_UI_ActivityQuitFlow__ShowSingle (Dino_BusSand_App_UI_ActivityQuitFlow_o* __this, Dino_BusSand_App_Meta_IStakeActivity_o* a, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ActivityQuitFlow$$ShowSingle
   bool Dino_BusSand_App_UI_ActivityQuitFlow__ShowSingle (Dino_BusSand_App_UI_ActivityQuitFlow_o*
   __this, Dino_BusSand_App_Meta_IStakeActivity_o* a, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_ActivityQuitFlow__ShowSingle_2188508(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  if ((bRam0000000004f9b96b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cad920);
    FUN_02132f7c(PTR_DAT_04cadac0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* catch() { ... } // from try @ 022885b0 with catch @ 0228855c */
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cadac8);
    FUN_02132f7c(PTR_DAT_04cadad0);
    FUN_02132f7c(PTR_DAT_04cadad8);
    FUN_02132f7c(PTR_DAT_04cadae0);
    FUN_02132f7c(PTR_DAT_04cadae8);
                    /* try { // try from 022885a8 to 023885af has its CatchHandler @ 022885fc */
    FUN_02132f7c(PTR_DAT_04cadaf0);
                    /* try { // try from 022885b0 to 0238860f has its CatchHandler @ 0228855c */
    FUN_02132f7c(PTR_DAT_04cadaf8);
    bRam0000000004f9b96b = 1;
  }
  puVar2 = PTR_DAT_04cadac0;
  if (param_2 != (long *)0x0) {
    lVar8 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04cadac0) {
                    /* try { // try from 0228861c to 0238861f has its CatchHandler @ 02288628 */
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_02288620;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
                    /* catch() { ... } // from try @ 022885a8 with catch @ 022885fc */
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0216b7a4(param_2,*(long *)PTR_DAT_04cadac0,3);
LAB_02288620:
    puVar1 = PTR_DAT_04ca9ae8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0228861c with catch @ 02288628
                        */
                    /* catch() { ... } // from try @ 02288670 with catch @ 0228862c */
    uVar6 = (*(code *)*puVar5)(param_2,puVar5[1]);
    uVar9 = System_String__IsNullOrEmpty_46d2084(uVar6,0);
    uVar11 = 0;
    if ((uVar9 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 02288664 to 0238866f has its CatchHandler @ 02288714 */
      uVar11 = Dino_BusSand_App_UiAssets__Prefab_21513b8(uVar6,0);
    }
                    /* try { // try from 02288670 to 02388733 has its CatchHandler @ 0228862c */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
    if ((uVar9 & 1) != 0) {
      return 0;
    }
    Dino_BusSand_App_UI_ActivityQuitFlow__HideAll_2188b58(param_1);
    if (*(long *)(param_1 + 0x10) != 0) {
      Dino_BusSand_App_UI_QuitPanel__ApplyPaiziLayout_231c1e8(*(long *)(param_1 + 0x10),1,0);
      lVar8 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02288714;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_0216b7a4(param_2,*(long *)puVar2,0);
LAB_02288714:
                    /* catch() { ... } // from try @ 02288664 with catch @ 02288714 */
      iVar4 = (*(code *)*puVar5)(param_2,puVar5[1]);
      if (iVar4 == 3) {
        if (*(long *)(param_1 + 0x10) != 0) {
          lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                            (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_04cadaf0,0);
          if (*(long *)(param_1 + 0x10) != 0) {
            uVar6 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                              (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_04cadaf8,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
            if ((uVar9 & 1) == 0) {
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
              if ((uVar9 & 1) == 0) {
                if ((lVar8 != 0) &&
                   (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0), lVar8 != 0)) {
                  UnityEngine_GameObject__SetActive_43c1408(lVar8,1,0);
                  lVar12 = *(long *)(param_1 + 0x10);
                  lVar13 = *(long *)PTR_DAT_04ca9d18;
                  lVar8 = *(long *)(lVar13 + 0x38);
                  if (lVar8 == 0) {
                    FUN_0216b4cc(lVar13);
                    lVar8 = *(long *)(lVar13 + 0x38);
                  }
                  lVar8 = *(long *)(lVar8 + 0x10);
                  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                    lVar8 = FUN_0216b470();
                  }
                  if (*(int *)(lVar8 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
                  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                    lVar8 = FUN_0216b470();
                  }
                  if (lVar12 != 0) {
                    Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
                              (lVar12,*(undefined8 *)PTR_DAT_04cadae0,
                               *(undefined8 *)PTR_DAT_04cadad8,**(undefined8 **)(lVar8 + 0xb8),0);
                    uVar6 = Dino_BusSand_App_UI_ActivityQuitFlow__Spawn_2188ee0
                                      (param_1,uVar11,uVar6);
                    goto LAB_02288a38;
                  }
                }
                goto LAB_02288abc;
              }
            }
            return 0;
          }
        }
      }
      else {
        lVar8 = *param_2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_022888c8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_0216b7a4(param_2,*(long *)puVar2,0);
LAB_022888c8:
        iVar4 = (*(code *)*puVar5)(param_2,puVar5[1]);
        puVar3 = PTR_DAT_04cadac8;
        puVar5 = (undefined8 *)puVar3;
        if (iVar4 != 2) {
          lVar8 = *param_2;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_02288930;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_0216b7a4(param_2,*(long *)puVar2,0);
LAB_02288930:
          iVar4 = (*(code *)*puVar5)(param_2,puVar5[1]);
          puVar5 = (undefined8 *)PTR_DAT_04cadad0;
          if (iVar4 != 4) {
            lVar8 = *param_2;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_0228899c;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_0216b7a4(param_2,*(long *)puVar2,0);
LAB_0228899c:
            iVar4 = (*(code *)*puVar5)(param_2,puVar5[1]);
            puVar5 = (undefined8 *)PTR_DAT_04cadae8;
            if (iVar4 != 5) {
              puVar5 = (undefined8 *)puVar3;
            }
          }
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(*(long *)(param_1 + 0x10),*puVar5,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
          if ((uVar9 & 1) != 0) {
            return 0;
          }
          if ((lVar8 != 0) &&
             (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0), lVar12 != 0)) {
            UnityEngine_GameObject__SetActive_43c1408(lVar12,1,0);
            uVar6 = Dino_BusSand_App_UI_ActivityQuitFlow__Spawn_2188ee0(param_1,uVar11,lVar8);
            Dino_BusSand_App_UI_ActivityQuitFlow__ApplyLevelBg_21896b8(param_1,1);
LAB_02288a38:
            puVar2 = PTR_DAT_04cad920;
            plVar7 = (long *)thunk_FUN_0216e7a0(param_2,*(undefined8 *)PTR_DAT_04cad920);
            if (plVar7 != (long *)0x0) {
              lVar8 = *plVar7;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                    goto LAB_02288aa4;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar2,1);
LAB_02288aa4:
              (*(code *)*puVar5)(plVar7,uVar6,puVar5[1]);
            }
            return 1;
          }
        }
      }
    }
  }
LAB_02288abc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

