/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$LoadConfigs
void Dino_BusSand_App_Meta_GiftPackFeature__LoadConfigs (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02334920) */
/* WARNING: Removing unreachable block (ram,0x023349a0) */
/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$LoadConfigs
   void Dino_BusSand_App_Meta_GiftPackFeature__LoadConfigs (Dino_BusSand_App_Meta_GiftPackFeature_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__LoadConfigs_2234390(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  
  if ((bRam0000000004f9be99 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3330);
    FUN_02132f7c(PTR_DAT_04cb3338);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cad288);
    FUN_02132f7c(PTR_DAT_04cad290);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cb3340);
    FUN_02132f7c(PTR_DAT_04cb3348);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb3350);
    FUN_02132f7c(PTR_DAT_04cb3358);
    FUN_02132f7c(PTR_DAT_04cb3360);
    FUN_02132f7c(PTR_DAT_04cb3368);
    bRam0000000004f9be99 = 1;
  }
  lVar14 = *(long *)(param_1 + 0x18);
  if (lVar14 != 0) {
    iVar1 = *(int *)(lVar14 + 0x18);
    *(undefined4 *)(lVar14 + 0x18) = 0;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar14 + 0x10),0,iVar1,0);
    }
    puVar5 = PTR_DAT_04cb3350;
    puVar6 = PTR_DAT_04cac018;
    if (*(long *)(param_1 + 0x20) != 0) {
      System_Collections_Generic_Dictionary_int__object___Clear_34374b4
                (*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cb3330);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      plVar10 = (long *)Dino_BusSand_App_Tables__Rows_215eefc(*(undefined8 *)puVar5,0);
      puVar5 = PTR_DAT_04cad288;
      if (plVar10 != (long *)0x0) {
        lVar14 = *plVar10;
        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_04cad288) {
              puVar11 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_02334528;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)PTR_DAT_04cad288,0);
LAB_02334528:
        plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        puVar8 = PTR_DAT_04cb3340;
        puVar7 = PTR_DAT_04cad290;
        puVar4 = PTR_DAT_04ca9c08;
joined_r0x02334540:
        do {
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar14 = *plVar10;
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
                puVar11 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_023345ac;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)puVar4,0);
LAB_023345ac:
          uVar17 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          puVar3 = PTR_DAT_04ca9b30;
          if ((uVar17 & 1) == 0) {
            if (plVar10 == (long *)0x0) goto LAB_0233470c;
            lVar14 = *plVar10;
            uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar17 == 0) goto LAB_023346e4;
            piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            goto LAB_023346cc;
          }
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar14 = *plVar10;
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar7) {
                puVar11 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_02334610;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)puVar7,0);
LAB_02334610:
          (*(code *)*puVar11)(plVar10,puVar11[1]);
          lVar14 = Dino_BusSand_App_Meta_GiftPackConfig__FromRow_2231754();
        } while ((lVar14 == 0) || (*(int *)(lVar14 + 0x10) < 1));
        lVar12 = *(long *)(param_1 + 0x18);
        if (lVar12 != 0) {
          lVar15 = *(long *)(lVar12 + 0x10);
          lVar18 = *(long *)puVar8;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar15 != 0) {
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              plVar16 = (long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
              *plVar16 = lVar14;
              thunk_FUN_02134474(plVar16);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar12,lVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            goto joined_r0x02334540;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
  goto LAB_0233499c;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar19 = piVar19 + 4;
    if (uVar17 == 0) break;
LAB_023348d4:
    if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_02334908;
    }
  }
LAB_023348ec:
  puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)puVar3,0);
LAB_02334908:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_02334914:
  puVar5 = PTR_DAT_04cb3368;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar14 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar5,1,0);
  if (lVar14 != 0) {
    uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar14,*(undefined8 *)PTR_DAT_04cb3360,0);
    uVar9 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar13,0,0);
    *(undefined4 *)(param_1 + 0x40) = uVar9;
  }
  return;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar19 = piVar19 + 4;
    if (uVar17 == 0) break;
LAB_023346cc:
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar11 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_02334700;
    }
  }
LAB_023346e4:
  puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)PTR_DAT_04ca9b30,0);
LAB_02334700:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_0233470c:
  puVar4 = PTR_DAT_04cb3358;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar10 = (long *)Dino_BusSand_App_Tables__Rows_215eefc(*(undefined8 *)puVar4,0);
  if (plVar10 != (long *)0x0) {
    lVar14 = *plVar10;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_02334788;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)puVar5,0);
LAB_02334788:
    plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
    puVar7 = PTR_DAT_04cb3338;
    puVar4 = PTR_DAT_04cad290;
    puVar5 = PTR_DAT_04ca9c08;
    do {
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar14 = *plVar10;
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_0233480c;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)puVar5,0);
LAB_0233480c:
      uVar17 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if ((uVar17 & 1) == 0) {
        if (plVar10 == (long *)0x0) goto LAB_02334914;
        lVar14 = *plVar10;
        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar17 == 0) goto LAB_023348ec;
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        goto LAB_023348d4;
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar14 = *plVar10;
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_02334870;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)puVar4,0);
LAB_02334870:
      (*(code *)*puVar11)(plVar10,puVar11[1]);
      lVar14 = Dino_BusSand_App_Meta_GiftPackTheme__FromRow_2231e50();
      if (lVar14 != 0) {
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_Dictionary_int__object___set_Item_3437318
                  (*(long *)(param_1 + 0x20),*(undefined4 *)(lVar14 + 0x10),lVar14,
                   *(undefined8 *)puVar7);
      }
    } while( true );
  }
LAB_0233499c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

