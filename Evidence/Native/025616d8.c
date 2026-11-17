/* IL2CPP: Dino.Tracking.ServerTrackingCore$$WriteParameter
void Dino_Tracking_ServerTrackingCore__WriteParameter (System_Text_StringBuilder_o* sb, Dino_Common_DinoTrackingParameter_o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02561af8) */
/* WARNING: Removing unreachable block (ram,0x02561b2c) */
/* WARNING: Removing unreachable block (ram,0x025620d0) */
/* IL2CPP: Dino.Tracking.ServerTrackingCore$$WriteParameter
   void Dino_Tracking_ServerTrackingCore__WriteParameter (System_Text_StringBuilder_o* sb,
   Dino_Common_DinoTrackingParameter_o* p, const MethodInfo* method); */

void Dino_Tracking_ServerTrackingCore__WriteParameter_24616d8(long param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  int iVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  uint uStack_64;
  
  if ((bRam0000000004f9ce28 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cbfaf0);
    FUN_02132f7c(PTR_DAT_04cc0a70);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cab288);
    bRam0000000004f9ce28 = 1;
  }
  uVar10 = System_String__IsNullOrEmpty_46d2084(*param_2,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  Dino_Tracking_ServerTrackingCore__WriteStringValue_2461b8c(param_1,*param_2);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Text_StringBuilder__Append_46dd710(param_1,0x3a,0);
  bVar1 = *(byte *)(param_2 + 1);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      lVar14 = param_2[2];
      if (lVar14 == 0) {
        lVar14 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
      }
      goto LAB_02561938;
    }
    if (bVar1 == 1) {
      if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar13 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
      uVar13 = System_Int64__ToString_482eba4(&stack0xffffffffffffffc0,uVar13,0);
      goto LAB_02561924;
    }
  }
  else {
    if (bVar1 == 2) {
      if (((ulong)param_2[4] >> 0x34 & 0x7ff) < 0x7ff) {
        if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar13 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
        uVar13 = System_Double__ToString_4817988(&stack0xffffffffffffffc8,uVar13,0);
      }
      else {
        uVar13 = *(undefined8 *)PTR_DAT_04cab288;
      }
LAB_02561924:
      System_Text_StringBuilder__Append_46dcdf4(param_1,uVar13,0);
      return;
    }
    if (bVar1 == 3) {
      plVar11 = (long *)Dino_Common_DinoTrackingParameter__AsDictionary_24476ac(param_2,0);
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
      if (plVar11 != (long *)0x0) {
        lVar14 = *plVar11;
        uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar10 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04cab948) {
              puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_02561ef8;
            }
            uVar10 = uVar10 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar10 != 0);
        }
        puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)PTR_DAT_04cab948,0);
LAB_02561ef8:
        puVar3 = PTR_DAT_04cab950;
        puVar2 = PTR_DAT_04ca9c08;
        plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        bVar17 = true;
        do {
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar14 = *plVar11;
          uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar10 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_02561f78;
              }
              uVar10 = uVar10 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar10 != 0);
          }
          puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)puVar2,0);
LAB_02561f78:
          uVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          if ((uVar10 & 1) == 0) {
            if (plVar11 == (long *)0x0) break;
            lVar14 = *plVar11;
            uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar10 == 0) goto LAB_02562070;
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            goto LAB_02562058;
          }
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar14 = *plVar11;
          uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar10 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_02561fdc;
              }
              uVar10 = uVar10 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar10 != 0);
          }
          puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)puVar3,0);
LAB_02561fdc:
          auVar18 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          uVar10 = System_String__IsNullOrEmpty_46d2084(auVar18._0_8_,0);
          if ((uVar10 & 1) == 0) {
            if (!bVar17) {
              System_Text_StringBuilder__Append_46dd710(param_1,0x2c,0);
            }
            Dino_Tracking_ServerTrackingCore__WriteValue_2462130
                      (param_1,auVar18._0_8_,auVar18._8_8_);
            bVar17 = false;
          }
        } while( true );
      }
      goto LAB_0256209c;
    }
    if (bVar1 == 4) {
      System_Text_StringBuilder__Append_46dd710(param_1,0x5b,0);
      plVar11 = (long *)Dino_Common_DinoTrackingParameter__AsDictionaryEnumerable_2447718(param_2,0)
      ;
      if (plVar11 != (long *)0x0) {
        lVar14 = *plVar11;
        uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar10 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04cbfaf0) {
              puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0256195c;
            }
            uVar10 = uVar10 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar10 != 0);
        }
        puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)PTR_DAT_04cbfaf0,0);
LAB_0256195c:
        plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        puVar3 = PTR_DAT_04cc0a70;
        puVar2 = PTR_DAT_04ca9c08;
        bVar17 = true;
        do {
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar14 = *plVar11;
          uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar10 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_025619dc;
              }
              uVar10 = uVar10 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar10 != 0);
          }
          puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)puVar2,0);
LAB_025619dc:
          uVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          if ((uVar10 & 1) == 0) {
            if (plVar11 == (long *)0x0) break;
            lVar14 = *plVar11;
            uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar10 == 0) goto LAB_02561ac4;
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            goto LAB_02561aac;
          }
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar14 = *plVar11;
          uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar10 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_02561a40;
              }
              uVar10 = uVar10 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar10 != 0);
          }
          puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)puVar3,0);
LAB_02561a40:
          uVar13 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          if (!bVar17) {
            System_Text_StringBuilder__Append_46dd710(param_1,0x2c,0);
          }
          Dino_Tracking_ServerTrackingCore__WriteDictionary_2461e10(param_1,uVar13);
          bVar17 = false;
        } while( true );
      }
      goto LAB_02561afc;
    }
  }
  plVar11 = (long *)Dino_Common_DinoTrackingParameter__get_Value_2447784(param_2,0);
  if (plVar11 == (long *)0x0) {
    lVar14 = 0;
  }
  else {
    lVar14 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
  }
LAB_02561938:
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
  uStack_64 = 0;
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
  if ((lVar14 != 0) && (0 < *(int *)(lVar14 + 0x10))) {
    iVar16 = 0;
    do {
      uVar9 = System_String__get_Chars_46ccb24(lVar14,iVar16,0);
      uVar9 = uVar9 & 0xffff;
      if (uVar9 < 0xc) {
        if (uVar9 == 8) {
          uVar13 = *(undefined8 *)puVar2;
        }
        else if (uVar9 == 9) {
          uVar13 = *(undefined8 *)puVar4;
        }
        else {
          if (uVar9 != 10) goto LAB_02561d1c;
          uVar13 = *(undefined8 *)puVar3;
        }
LAB_02561dac:
        System_Text_StringBuilder__Append_46dcdf4(param_1,uVar13,0);
      }
      else {
        if (0x21 < uVar9) {
          if (uVar9 == 0x5c) {
            uVar13 = *(undefined8 *)puVar8;
          }
          else {
            if (uVar9 != 0x22) goto LAB_02561d1c;
            uVar13 = *(undefined8 *)puVar5;
          }
          goto LAB_02561dac;
        }
        if (uVar9 == 0xc) {
          uVar13 = *(undefined8 *)puVar6;
          goto LAB_02561dac;
        }
        if (uVar9 == 0xd) {
          uVar13 = *(undefined8 *)puVar7;
          goto LAB_02561dac;
        }
LAB_02561d1c:
        if (uVar9 < 0x20) {
          System_Text_StringBuilder__Append_46dcdf4(param_1,*(undefined8 *)PTR_DAT_04ca9be8,0);
          uStack_64 = uVar9;
          if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar13 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
          uVar13 = System_Int32__ToString_482d92c
                             (&uStack_64,*(undefined8 *)PTR_DAT_04ca9bf0,uVar13,0);
          goto LAB_02561dac;
        }
        System_Text_StringBuilder__Append_46dd710(param_1,uVar9,0);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(lVar14 + 0x10));
  }
  System_Text_StringBuilder__Append_46dd710(param_1,0x22,0);
  return;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar15 = piVar15 + 4;
    if (uVar10 == 0) break;
LAB_02561aac:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_02561ae0;
    }
  }
LAB_02561ac4:
  puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)PTR_DAT_04ca9b30,0);
LAB_02561ae0:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_02561afc:
  System_Text_StringBuilder__Append_46dd710(param_1,0x5d,0);
  return;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar15 = piVar15 + 4;
    if (uVar10 == 0) break;
LAB_02562058:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0256208c;
    }
  }
LAB_02562070:
  puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)PTR_DAT_04ca9b30,0);
LAB_0256208c:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_0256209c:
  System_Text_StringBuilder__Append_46dd710(param_1,0x7d,0);
  return;
}

