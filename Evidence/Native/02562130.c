/* IL2CPP: Dino.Tracking.ServerTrackingCore$$WriteValue
void Dino_Tracking_ServerTrackingCore__WriteValue (System_Text_StringBuilder_o* sb, System_String_o* key, Il2CppObject* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025620d0) */
/* IL2CPP: Dino.Tracking.ServerTrackingCore$$WriteValue
   void Dino_Tracking_ServerTrackingCore__WriteValue (System_Text_StringBuilder_o* sb,
   System_String_o* key, Il2CppObject* value, const MethodInfo* method); */

long Dino_Tracking_ServerTrackingCore__WriteValue_2462130
               (long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined2 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  long *plVar13;
  char *pcVar14;
  uint *puVar15;
  ulong *puVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  int iVar21;
  long lVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  Dino_Tracking_ServerTrackingCore__WriteStringValue_2461b8c();
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Text_StringBuilder__Append_46dd710(param_1,0x3a,0);
  if ((bRam0000000004f9ce2a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04cab940);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cc0a78);
    FUN_02132f7c(PTR_DAT_04cc0a80);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04ca9b60);
    FUN_02132f7c(PTR_DAT_04ca9b68);
    FUN_02132f7c(PTR_DAT_04ca9b70);
    FUN_02132f7c(PTR_DAT_04cab288);
    bRam0000000004f9ce2a = 1;
  }
  uStack_58 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  if (param_3 == (long *)0x0) {
    plVar13 = (long *)PTR_DAT_04ca9b60;
    if (param_1 == 0) goto LAB_02562698;
  }
  else {
    lVar18 = *param_3;
    if (lVar18 != *(long *)(PTR_DAT_04ca9ac8 + 0x28)) {
      if (lVar18 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) {
code_r0x02561b8c:
        if ((bRam0000000004f9ce2c & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04caa370);
          FUN_02132f7c(PTR_DAT_04ca9bb8);
          FUN_02132f7c(PTR_DAT_04ca9bc0);
          FUN_02132f7c(PTR_DAT_04ca9bc8);
          FUN_02132f7c(PTR_DAT_04ca9bd0);
          FUN_02132f7c(PTR_DAT_04ca9bd8);
          FUN_02132f7c(PTR_DAT_04ca9be0);
          FUN_02132f7c(PTR_DAT_04ca9be8);
          FUN_02132f7c(PTR_DAT_04ca9bf0);
          FUN_02132f7c(PTR_DAT_04ca9bf8);
          bRam0000000004f9ce2c = 1;
        }
        uStack_68 = uStack_68 & 0xffffffff;
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Text_StringBuilder__Append_46dd710(param_1,0x22,0);
        puVar8 = PTR_DAT_04ca9bf8;
        puVar7 = PTR_DAT_04ca9be0;
        puVar6 = PTR_DAT_04ca9bd8;
        puVar5 = PTR_DAT_04ca9bd0;
        puVar4 = PTR_DAT_04ca9bc8;
        puVar3 = PTR_DAT_04ca9bc0;
        puVar2 = PTR_DAT_04ca9bb8;
        if ((param_3 != (long *)0x0) && (0 < (int)param_3[2])) {
          iVar21 = 0;
          do {
            uVar10 = System_String__get_Chars_46ccb24(param_3,iVar21,0);
            uVar1 = uVar10 & 0xffff;
            if (uVar1 < 0xc) {
              if (uVar1 == 8) {
                uVar17 = *(undefined8 *)puVar2;
              }
              else if (uVar1 == 9) {
                uVar17 = *(undefined8 *)puVar4;
              }
              else {
                if (uVar1 != 10) goto LAB_02561d1c;
                uVar17 = *(undefined8 *)puVar3;
              }
LAB_02561dac:
              System_Text_StringBuilder__Append_46dcdf4(param_1,uVar17,0);
            }
            else {
              if (0x21 < uVar1) {
                if (uVar1 == 0x5c) {
                  uVar17 = *(undefined8 *)puVar8;
                }
                else {
                  if (uVar1 != 0x22) goto LAB_02561d1c;
                  uVar17 = *(undefined8 *)puVar5;
                }
                goto LAB_02561dac;
              }
              if (uVar1 == 0xc) {
                uVar17 = *(undefined8 *)puVar6;
                goto LAB_02561dac;
              }
              if (uVar1 == 0xd) {
                uVar17 = *(undefined8 *)puVar7;
                goto LAB_02561dac;
              }
LAB_02561d1c:
              if (uVar1 < 0x20) {
                System_Text_StringBuilder__Append_46dcdf4(param_1,*(undefined8 *)PTR_DAT_04ca9be8,0)
                ;
                uStack_68 = CONCAT44(uVar10,(undefined4)uStack_68) & 0xffffffffffff;
                if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar17 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
                uVar17 = System_Int32__ToString_482d92c
                                   ((long)&uStack_68 + 4,*(undefined8 *)PTR_DAT_04ca9bf0,uVar17,0);
                goto LAB_02561dac;
              }
              System_Text_StringBuilder__Append_46dd710(param_1,uVar1,0);
            }
            iVar21 = iVar21 + 1;
          } while (iVar21 < (int)param_3[2]);
        }
        lVar18 = System_Text_StringBuilder__Append_46dd710(param_1,0x22,0);
        return lVar18;
      }
      if (lVar18 == *(long *)(PTR_DAT_04ca9ac8 + 0x18)) {
        thunk_FUN_0216e9e4(param_3);
        if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar17 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
        uVar17 = System_Byte__ToString_47bb4cc(&stack0xffffffffffffffcc,uVar17,0);
      }
      else if (lVar18 == *(long *)(PTR_DAT_04ca9ac8 + 0x30)) {
        thunk_FUN_0216e9e4(param_3);
        if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar17 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
        uVar17 = System_SByte__ToString_4841634(&stack0xffffffffffffffc8,uVar17,0);
      }
      else if (lVar18 == *(long *)(PTR_DAT_04ca9ac8 + 0x38)) {
        FUN_01e76eec(param_3);
        if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar17 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
        uVar17 = System_Int16__ToString_482bc08(&stack0xffffffffffffffc4,uVar17,0);
      }
      else if (lVar18 == *(long *)(PTR_DAT_04ca9ac8 + 0x40)) {
        FUN_01e76eec(param_3);
        if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar17 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
        uVar17 = System_UInt16__ToString_484b57c(&stack0xffffffffffffffc0,uVar17,0);
      }
      else if (lVar18 == *(long *)(PTR_DAT_04ca9ac8 + 0x48)) {
        FUN_01e76eec(param_3);
        if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar17 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
        uVar17 = System_Int32__ToString_482d894(&stack0xffffffffffffffbc,uVar17,0);
      }
      else if (lVar18 == *(long *)(PTR_DAT_04ca9ac8 + 0x50)) {
        FUN_01e76eec(param_3);
        if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar17 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
        uVar17 = System_UInt32__ToString_484c318(&stack0xffffffffffffffb8,uVar17,0);
      }
      else if (lVar18 == *(long *)(PTR_DAT_04ca9ac8 + 0x68)) {
        FUN_01e76eec(param_3);
        if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar17 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
        uVar17 = System_Int64__ToString_482eba4(&stack0xffffffffffffffb0,uVar17,0);
      }
      else if (lVar18 == *(long *)(PTR_DAT_04ca9ac8 + 0x70)) {
        puVar12 = (undefined8 *)FUN_01e76eec(param_3);
        uStack_58 = *puVar12;
        if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar17 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
        uVar17 = System_UInt64__ToString_484d10c(&uStack_58,uVar17,0);
      }
      else if (lVar18 == *(long *)(PTR_DAT_04ca9ac8 + 0x78)) {
        puVar15 = (uint *)FUN_01e76eec(param_3);
        if ((*puVar15 >> 0x17 & 0xff) < 0xff) {
          if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar17 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
          uVar17 = System_Single__ToString_484264c(&stack0xffffffffffffffa4,uVar17,0);
        }
        else {
LAB_02562688:
          uVar17 = *(undefined8 *)PTR_DAT_04cab288;
        }
      }
      else {
        if (lVar18 != *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
          plVar13 = (long *)thunk_FUN_0216e7a0(param_3,*(undefined8 *)PTR_DAT_04cab940);
          puVar2 = PTR_DAT_04cc0a78;
          if (plVar13 != (long *)0x0) {
            if ((bRam0000000004f9ce29 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04ca9b30);
              FUN_02132f7c(PTR_DAT_04cab948);
              FUN_02132f7c(PTR_DAT_04cab950);
              FUN_02132f7c(PTR_DAT_04ca9c08);
              FUN_02132f7c(PTR_DAT_04caa310);
              FUN_02132f7c(PTR_DAT_04caa318);
              bRam0000000004f9ce29 = 1;
            }
            if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            System_Text_StringBuilder__Append_46dd710(param_1,0x7b,0);
            if (plVar13 != (long *)0x0) {
              lVar18 = *plVar13;
              uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_04cab948) {
                    puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_02561ef8;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              puVar12 = (undefined8 *)FUN_0216b7a4(plVar13,*(long *)PTR_DAT_04cab948,0);
LAB_02561ef8:
              puVar3 = PTR_DAT_04cab950;
              puVar2 = PTR_DAT_04ca9c08;
              plVar13 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
              bVar23 = true;
              do {
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar18 = *plVar13;
                uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
                if (uVar19 != 0) {
                  piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
                      puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                      goto LAB_02561f78;
                    }
                    uVar19 = uVar19 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar19 != 0);
                }
                puVar12 = (undefined8 *)FUN_0216b7a4(plVar13,*(long *)puVar2,0);
LAB_02561f78:
                uVar19 = (*(code *)*puVar12)(plVar13,puVar12[1]);
                if ((uVar19 & 1) == 0) {
                  if (plVar13 == (long *)0x0) break;
                  lVar18 = *plVar13;
                  uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
                  if (uVar19 == 0) goto LAB_02562070;
                  piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  goto LAB_02562058;
                }
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar18 = *plVar13;
                uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
                if (uVar19 != 0) {
                  piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                      puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                      goto LAB_02561fdc;
                    }
                    uVar19 = uVar19 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar19 != 0);
                }
                puVar12 = (undefined8 *)FUN_0216b7a4(plVar13,*(long *)puVar3,0);
LAB_02561fdc:
                auVar24 = (*(code *)*puVar12)(plVar13,puVar12[1]);
                uVar19 = System_String__IsNullOrEmpty_46d2084(auVar24._0_8_,0);
                if ((uVar19 & 1) == 0) {
                  if (!bVar23) {
                    System_Text_StringBuilder__Append_46dd710(param_1,0x2c,0);
                  }
                  Dino_Tracking_ServerTrackingCore__WriteValue_2462130
                            (param_1,auVar24._0_8_,auVar24._8_8_);
                  bVar23 = false;
                }
              } while( true );
            }
            goto LAB_0256209c;
          }
          lVar18 = thunk_FUN_0216e7a0(param_3,*(undefined8 *)PTR_DAT_04cc0a78);
          if (lVar18 != 0) {
            if (param_1 != 0) {
              System_Text_StringBuilder__Append_46dd710(param_1,0x5b,0);
              lStack_70 = FUN_01e79d5c(0,*(undefined8 *)puVar2,lVar18);
              puVar3 = PTR_DAT_04cc0a80;
              puVar2 = PTR_DAT_04ca9c08;
              plStack_78 = &lStack_70;
              bVar23 = true;
              uStack_80 = 0;
              while( true ) {
                if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uVar19 = FUN_01e79d5c(0,*(undefined8 *)puVar2);
                if ((uVar19 & 1) == 0) break;
                if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uVar17 = FUN_01e79d5c(0,*(undefined8 *)puVar3);
                if (!bVar23) {
                  System_Text_StringBuilder__Append_46dd710(param_1,0x2c,0);
                }
                Dino_Tracking_ServerTrackingCore__WriteBareValue_2462170(param_1,uVar17);
                bVar23 = false;
              }
              FUN_01e76e5c(&uStack_80);
              lVar18 = System_Text_StringBuilder__Append_46dd710(param_1,0x5d,0);
              return lVar18;
            }
            goto LAB_02562698;
          }
          param_3 = (long *)(**(code **)(*param_3 + 0x168))
                                      (param_3,*(undefined8 *)(*param_3 + 0x170));
          goto code_r0x02561b8c;
        }
        puVar16 = (ulong *)FUN_01e76eec(param_3);
        uStack_68 = *puVar16;
        if (0x7fe < (uStack_68 >> 0x34 & 0x7ff)) goto LAB_02562688;
        if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar17 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
        uVar17 = System_Double__ToString_4817988(&uStack_68,uVar17,0);
      }
      if (param_1 != 0) {
        lVar18 = System_Text_StringBuilder__Append_46dcdf4(param_1,uVar17,0);
        return lVar18;
      }
LAB_02562698:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    pcVar14 = (char *)thunk_FUN_0216e9e4(param_3);
    if (param_1 == 0) goto LAB_02562698;
    plVar13 = (long *)PTR_DAT_04ca9b68;
    if (*pcVar14 != '\0') {
      plVar13 = (long *)PTR_DAT_04ca9b70;
    }
  }
  lVar18 = *plVar13;
  if (lVar18 != 0) {
    lVar22 = *(long *)(param_1 + 0x10);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(param_1,lVar18,0);
    }
    uVar1 = *(uint *)(param_1 + 0x20);
    iVar21 = *(int *)(lVar18 + 0x10);
    if ((int)(iVar21 + uVar1) < *(int *)(lVar22 + 0x18)) {
      if (iVar21 < 3) {
        if (0 < iVar21) {
          uVar9 = System_String__get_Chars_46ccb24(lVar18,0,0);
          if (*(uint *)(lVar22 + 0x18) <= uVar1) {
LAB_047dcef4:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          *(undefined2 *)(lVar22 + (long)(int)uVar1 * 2 + 0x20) = uVar9;
          if (iVar21 != 1) {
            uVar9 = System_String__get_Chars_46ccb24(lVar18,1,0);
            if (*(uint *)(lVar22 + 0x18) <= uVar1 + 1) goto LAB_047dcef4;
            *(undefined2 *)(lVar22 + (long)(int)(uVar1 + 1) * 2 + 0x20) = uVar9;
          }
        }
      }
      else {
        iVar11 = System_Runtime_CompilerServices_RuntimeHelpers__get_OffsetToStringData_476d5e4(0);
        if (*(uint *)(lVar22 + 0x18) <= uVar1) goto LAB_047dcef4;
        System_String__wstrcpy_46d152c
                  (lVar22 + (long)(int)uVar1 * 2 + 0x20,lVar18 + iVar11,iVar21,0);
      }
      *(uint *)(param_1 + 0x20) = iVar21 + uVar1;
    }
    else {
      System_Text_StringBuilder__AppendHelper_46dcef8(param_1,lVar18);
    }
  }
  return param_1;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_02562058:
    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_0256208c;
    }
  }
LAB_02562070:
  puVar12 = (undefined8 *)FUN_0216b7a4(plVar13,*(long *)PTR_DAT_04ca9b30,0);
LAB_0256208c:
  (*(code *)*puVar12)(plVar13,puVar12[1]);
LAB_0256209c:
  lVar18 = System_Text_StringBuilder__Append_46dd710(param_1,0x7d,0);
  return lVar18;
}

