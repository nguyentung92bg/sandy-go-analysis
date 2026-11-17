/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$FindClickable
UnityEngine_Transform_o* Dino_BusSand_App_QaPilot_Runner__FindClickable (Dino_BusSand_App_QaPilot_Runner_o* __this, System_String_o* what, System_String_o** panel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0225b8d4) */
/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$FindClickable
   UnityEngine_Transform_o* Dino_BusSand_App_QaPilot_Runner__FindClickable
   (Dino_BusSand_App_QaPilot_Runner_o* __this, System_String_o* what, System_String_o** panel, const
   MethodInfo* method); */

long Dino_BusSand_App_QaPilot_Runner__FindClickable_215b2f4
               (undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar2 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9b7f8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabab8);
    FUN_02132f7c(PTR_DAT_04cabac0);
    FUN_02132f7c(PTR_DAT_04cabac8);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cabad0);
    FUN_02132f7c(PTR_DAT_04cabad8);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cabae0);
    FUN_02132f7c(PTR_DAT_04caba98);
    FUN_02132f7c(PTR_DAT_04cabd78);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9b7f8 = 1;
  }
  lStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  plStack_88 = (long *)0x0;
  *param_3 = *(undefined8 *)puVar2;
  thunk_FUN_02134474(param_3);
  uVar5 = System_String__IsNullOrEmpty_46d2084(param_2,0);
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  if (param_2 != 0) {
    uVar5 = System_String__StartsWith_46d117c(param_2,*(undefined8 *)PTR_DAT_04cabd78,0);
    if ((uVar5 & 1) != 0) {
      param_2 = System_String__Substring_46d6a94(param_2,1,0);
    }
    puVar2 = PTR_DAT_04caba98;
    if (*(int *)(*(long *)PTR_DAT_04caba98 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = Dino_BusSand_App_QaPilot_Runner__OpenPanels_215c168();
    if (lVar6 != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&lStack_a0,lVar6,*(undefined8 *)PTR_DAT_04cabae0);
      puVar4 = PTR_DAT_04cabd10;
      puVar3 = PTR_DAT_04cabad8;
      puVar1 = PTR_DAT_04ca9c08;
      uStack_78 = plStack_98;
      lStack_80 = lStack_a0;
      lStack_70 = lStack_90;
      plStack_98 = &lStack_80;
      lStack_a0 = 0;
      do {
        uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&lStack_80,*(undefined8 *)PTR_DAT_04cabac0);
        lVar6 = lStack_70;
        if ((uVar7 & 1) == 0) {
          lVar13 = 0;
          break;
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        plVar8 = (long *)Dino_BusSand_App_QaPilot_Runner__Clickables_215c4bc(lVar6);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar13 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar7 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04cabad0) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0225b520;
            }
            uVar7 = uVar7 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)PTR_DAT_04cabad0,0);
LAB_0225b520:
        plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
joined_r0x0225b53c:
        do {
          plStack_88 = plVar8;
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar13 = *plVar8;
          uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar7 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0225b58c;
              }
              uVar7 = uVar7 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar7 != 0);
          }
          puVar9 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)puVar1,0);
LAB_0225b58c:
          uVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          plVar8 = plStack_88;
          if ((uVar7 & 1) == 0) {
            lVar13 = 0;
            iVar15 = 5;
            goto LAB_0225b738;
          }
          if (plStack_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar13 = *plStack_88;
          uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar7 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0225b5f0;
              }
              uVar7 = uVar7 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar7 != 0);
          }
          puVar9 = (undefined8 *)FUN_0216b7a4(plStack_88,*(long *)puVar3,0);
LAB_0225b5f0:
          lVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((uVar5 & 1) == 0) {
            if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar7 = System_String__Contains_46d726c(param_2,*(undefined8 *)puVar4,0);
            if ((uVar7 & 1) != 0) {
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar10 = UnityEngine_Component__get_transform_43bcd18(lVar6,0);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar10 = Dino_BusSand_App_QaPilot_Runner__PathOf_215c53c(lVar13,uVar10);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar11 = UnityEngine_Object__get_name_43c71a4(lVar13,0);
              lVar12 = System_String__Concat_46d2b84(uVar10,*(undefined8 *)puVar4,uVar11,0);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar7 = System_String__EndsWith_46d07bc(lVar12,param_2,5,0);
              plVar8 = plStack_88;
              if ((uVar7 & 1) != 0) goto LAB_0225b704;
              goto joined_r0x0225b53c;
            }
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar10 = UnityEngine_Object__get_name_43c71a4(lVar13,0);
            uVar7 = System_String__Equals_46d0e60(uVar10,param_2,5,0);
          }
          else {
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar10 = Dino_BusSand_App_QaPilot_Runner__Label_215c6a4(lVar13);
            uVar7 = System_String__Equals_46d0e60(uVar10,param_2,5,0);
          }
          plVar8 = plStack_88;
        } while ((uVar7 & 1) == 0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
LAB_0225b704:
        plVar8 = (long *)System_Object__GetType_4876970(lVar6,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar10 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
        *param_3 = uVar10;
        thunk_FUN_02134474(param_3);
        iVar15 = 0xc;
LAB_0225b738:
        plVar8 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          lVar6 = *plStack_88;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04ca9b30) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0225b798;
              }
              uVar7 = uVar7 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar7 != 0);
          }
          puVar9 = (undefined8 *)FUN_0216b7a4(plStack_88,*(long *)PTR_DAT_04ca9b30,0);
LAB_0225b798:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
      } while ((iVar15 == 5) || (iVar15 == 0));
      lVar6 = lStack_a0;
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (plStack_98,*(undefined8 *)PTR_DAT_04cabab8);
      if (lVar6 == 0) {
        return lVar13;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213321c(lVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

