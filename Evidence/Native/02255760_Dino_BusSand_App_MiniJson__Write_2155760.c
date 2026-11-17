/* IL2CPP: Dino.BusSand.App.MiniJson$$Write
void Dino_BusSand_App_MiniJson__Write (System_Text_StringBuilder_o* sb, Il2CppObject* o, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02255bdc) */
/* WARNING: Removing unreachable block (ram,0x02255f34) */
/* WARNING: Removing unreachable block (ram,0x02255e14) */
/* IL2CPP: Dino.BusSand.App.MiniJson$$Write
   void Dino_BusSand_App_MiniJson__Write (System_Text_StringBuilder_o* sb, Il2CppObject* o, const
   MethodInfo* method); */

long Dino_BusSand_App_MiniJson__Write_2155760(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  char *pcVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  int iVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_68;
  
  if ((bRam0000000004f9b7dd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04cab940);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cab948);
    FUN_02132f7c(PTR_DAT_04ca9c00);
    FUN_02132f7c(PTR_DAT_04cab950);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04caa310);
    FUN_02132f7c(PTR_DAT_04caa318);
    FUN_02132f7c(PTR_DAT_04ca9c18);
    FUN_02132f7c(PTR_DAT_04ca9b60);
    FUN_02132f7c(PTR_DAT_04ca9b68);
    FUN_02132f7c(PTR_DAT_04ca9b70);
    bRam0000000004f9b7dd = 1;
  }
  puVar2 = PTR_DAT_04ca9ac8;
  uStack_68 = (long *)0x0;
  if (param_2 == (long *)0x0) {
    plVar11 = (long *)PTR_DAT_04ca9b60;
    if (param_1 == 0) goto LAB_02255e90;
  }
  else {
    if (*param_2 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) {
LAB_022558f4:
      if ((bRam0000000004f9b7de & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9bc0);
        FUN_02132f7c(PTR_DAT_04ca9bc8);
        FUN_02132f7c(PTR_DAT_04ca9bd0);
        FUN_02132f7c(PTR_DAT_04ca9be0);
        FUN_02132f7c(PTR_DAT_04ca9be8);
        FUN_02132f7c(PTR_DAT_04ca9bf0);
        FUN_02132f7c(PTR_DAT_04ca9bf8);
        bRam0000000004f9b7de = 1;
      }
      uStack_68 = (long *)((ulong)uStack_68 & 0xffffffff);
      if ((param_1 == 0) ||
         (System_Text_StringBuilder__Append_46dd710(param_1,0x22,0), puVar7 = PTR_DAT_04ca9bf8,
         puVar6 = PTR_DAT_04ca9bf0, puVar5 = PTR_DAT_04ca9be0, puVar4 = PTR_DAT_04ca9bd0,
         puVar3 = PTR_DAT_04ca9bc8, puVar2 = PTR_DAT_04ca9bc0, param_2 == (long *)0x0)) {
LAB_022561e8:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (0 < (int)param_2[2]) {
        iVar19 = 0;
        do {
          uVar9 = System_String__get_Chars_46ccb24(param_2,iVar19,0);
          uVar1 = uVar9 & 0xffff;
          lVar15 = param_1;
          if (uVar1 < 0xd) {
            if (uVar1 == 9) {
              uVar14 = *(undefined8 *)puVar3;
              goto LAB_02256140;
            }
            if (uVar1 == 10) {
              uVar14 = *(undefined8 *)puVar2;
              goto LAB_02256140;
            }
LAB_0225615c:
            if (uVar1 < 0x20) {
              lVar15 = System_Text_StringBuilder__Append_46dcdf4
                                 (param_1,*(undefined8 *)PTR_DAT_04ca9be8,0);
              uStack_68 = (long *)(CONCAT44(uVar9,(undefined4)uStack_68) & 0xffffffffffff);
              uVar14 = System_Int32__ToString_482d7e4((long)&uStack_68 + 4,*(undefined8 *)puVar6,0);
              if (lVar15 != 0) goto LAB_02256140;
              goto LAB_022561e8;
            }
            System_Text_StringBuilder__Append_46dd710(param_1,uVar1,0);
          }
          else {
            if (uVar1 == 0xd) {
              uVar14 = *(undefined8 *)puVar5;
            }
            else if (uVar1 == 0x5c) {
              uVar14 = *(undefined8 *)puVar7;
            }
            else {
              if (uVar1 != 0x22) goto LAB_0225615c;
              uVar14 = *(undefined8 *)puVar4;
            }
LAB_02256140:
            System_Text_StringBuilder__Append_46dcdf4(lVar15,uVar14,0);
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 < (int)param_2[2]);
      }
      lVar15 = System_Text_StringBuilder__Append_46dd710(param_1,0x22,0);
      return lVar15;
    }
    if (*param_2 != *(long *)(PTR_DAT_04ca9ac8 + 0x28)) {
      plVar11 = (long *)thunk_FUN_0216e7a0(param_2,*(undefined8 *)PTR_DAT_04cab940);
      puVar3 = PTR_DAT_04ca9c00;
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)thunk_FUN_0216e7a0(param_2,*(undefined8 *)PTR_DAT_04ca9c00);
        if (plVar11 == (long *)0x0) {
          lVar15 = *param_2;
          if (lVar15 == *(long *)(puVar2 + 0x80)) {
            FUN_01e76eec(param_2,*(long *)(puVar2 + 0x80));
            if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar14 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
            uVar14 = System_Double__ToString_4817a14
                               (&stack0xffffffffffffffc8,*(undefined8 *)PTR_DAT_04ca9c18,uVar14,0);
          }
          else if (lVar15 == *(long *)(puVar2 + 0x78)) {
            FUN_01e76eec(param_2);
            if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar14 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
            uVar14 = System_Single__ToString_4842760
                               (&stack0xffffffffffffffbc,*(undefined8 *)PTR_DAT_04ca9c18,uVar14,0);
          }
          else if (lVar15 == *(long *)(puVar2 + 0x48)) {
            FUN_01e76eec(param_2);
            if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar14 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
            uVar14 = System_Int32__ToString_482d894(&stack0xffffffffffffffb8,uVar14,0);
          }
          else {
            if (lVar15 != *(long *)(puVar2 + 0x68)) {
              param_2 = (long *)(**(code **)(lVar15 + 0x168))
                                          (param_2,*(undefined8 *)(lVar15 + 0x170));
              goto LAB_022558f4;
            }
            FUN_01e76eec(param_2);
            if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar14 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
            uVar14 = System_Int64__ToString_482eba4(&stack0xffffffffffffffb0,uVar14,0);
          }
          if (param_1 != 0) {
            lVar15 = System_Text_StringBuilder__Append_46dcdf4(param_1,uVar14,0);
            return lVar15;
          }
        }
        else if (param_1 != 0) {
          System_Text_StringBuilder__Append_46dd710(param_1,0x5b,0);
          lVar15 = *plVar11;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
                puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_02255bf8;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)puVar3,0);
LAB_02255bf8:
          plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
          puVar2 = PTR_DAT_04ca9c08;
          bVar20 = true;
          do {
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar16 = *plVar11;
            lVar15 = *(long *)puVar2;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == lVar15) {
                  puVar12 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_02255c78;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,lVar15,0);
LAB_02255c78:
            uVar17 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            puVar3 = PTR_DAT_04ca9b30;
            if ((uVar17 & 1) == 0) {
              plVar11 = (long *)thunk_FUN_0216e7a0(plVar11,*(undefined8 *)PTR_DAT_04ca9b30);
              uStack_68 = plVar11;
              if (plVar11 == (long *)0x0) goto LAB_02255e08;
              lVar15 = *plVar11;
              uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar17 == 0) goto LAB_02255d78;
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              goto LAB_02255d60;
            }
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar16 = *plVar11;
            lVar15 = *(long *)puVar2;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == lVar15) {
                  puVar12 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto LAB_02255ce0;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,lVar15,1);
LAB_02255ce0:
            uVar14 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            if (!bVar20) {
              System_Text_StringBuilder__Append_46dd710(param_1,0x2c,0);
            }
            Dino_BusSand_App_MiniJson__Write_2155760(param_1,uVar14);
            bVar20 = false;
          } while( true );
        }
      }
      else if (param_1 != 0) {
        System_Text_StringBuilder__Append_46dd710(param_1,0x7b,0);
        lVar15 = *plVar11;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04cab948) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_022559d4;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)PTR_DAT_04cab948,0);
LAB_022559d4:
        plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        puVar3 = PTR_DAT_04cab950;
        puVar2 = PTR_DAT_04ca9c08;
        bVar20 = true;
        do {
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar15 = *plVar11;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_02255a54;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)puVar2,0);
LAB_02255a54:
          uVar17 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          if ((uVar17 & 1) == 0) {
            if (plVar11 == (long *)0x0) goto LAB_02255bd0;
            lVar15 = *plVar11;
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 == 0) goto LAB_02255b5c;
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            goto LAB_02255b44;
          }
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar15 = *plVar11;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
                puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_02255ab8;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)puVar3,0);
LAB_02255ab8:
          auVar21 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          if (!bVar20) {
            System_Text_StringBuilder__Append_46dd710(param_1,0x2c,0);
          }
          Dino_BusSand_App_MiniJson__WriteString_2155fec(param_1,auVar21._0_8_);
          System_Text_StringBuilder__Append_46dd710(param_1,0x3a,0);
          Dino_BusSand_App_MiniJson__Write_2155760(param_1,auVar21._8_8_);
          bVar20 = false;
        } while( true );
      }
LAB_02255e90:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    pcVar13 = (char *)thunk_FUN_0216e9e4(param_2);
    if (param_1 == 0) goto LAB_02255e90;
    plVar11 = (long *)PTR_DAT_04ca9b68;
    if (*pcVar13 != '\0') {
      plVar11 = (long *)PTR_DAT_04ca9b70;
    }
  }
  lVar15 = *plVar11;
  if (lVar15 != 0) {
    lVar16 = *(long *)(param_1 + 0x10);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(param_1,lVar15,0);
    }
    uVar1 = *(uint *)(param_1 + 0x20);
    iVar19 = *(int *)(lVar15 + 0x10);
    if ((int)(iVar19 + uVar1) < *(int *)(lVar16 + 0x18)) {
      if (iVar19 < 3) {
        if (0 < iVar19) {
          uVar8 = System_String__get_Chars_46ccb24(lVar15,0,0);
          if (*(uint *)(lVar16 + 0x18) <= uVar1) {
LAB_047dcef4:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          *(undefined2 *)(lVar16 + (long)(int)uVar1 * 2 + 0x20) = uVar8;
          if (iVar19 != 1) {
            uVar8 = System_String__get_Chars_46ccb24(lVar15,1,0);
            if (*(uint *)(lVar16 + 0x18) <= uVar1 + 1) goto LAB_047dcef4;
            *(undefined2 *)(lVar16 + (long)(int)(uVar1 + 1) * 2 + 0x20) = uVar8;
          }
        }
      }
      else {
        iVar10 = System_Runtime_CompilerServices_RuntimeHelpers__get_OffsetToStringData_476d5e4(0);
        if (*(uint *)(lVar16 + 0x18) <= uVar1) goto LAB_047dcef4;
        System_String__wstrcpy_46d152c
                  (lVar16 + (long)(int)uVar1 * 2 + 0x20,lVar15 + iVar10,iVar19,0);
      }
      *(uint *)(param_1 + 0x20) = iVar19 + uVar1;
    }
    else {
      System_Text_StringBuilder__AppendHelper_46dcef8(param_1,lVar15);
    }
  }
  return param_1;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_02255b44:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_02255bc4;
    }
  }
LAB_02255b5c:
  puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)PTR_DAT_04ca9b30,0);
LAB_02255bc4:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_02255bd0:
  uVar14 = 0x7d;
  goto LAB_02255e20;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_02255d60:
    if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
      puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_02255dfc;
    }
  }
LAB_02255d78:
  puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)puVar3,0);
LAB_02255dfc:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_02255e08:
  uVar14 = 0x5d;
LAB_02255e20:
  lVar15 = System_Text_StringBuilder__Append_46dd710(param_1,uVar14,0);
  return lVar15;
}

