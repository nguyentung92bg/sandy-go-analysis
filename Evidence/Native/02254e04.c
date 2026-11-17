/* IL2CPP: Dino.BusSand.App.MiniJson$$ParseValue
Il2CppObject* Dino_BusSand_App_MiniJson__ParseValue (System_String_o* s, int32_t* i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.MiniJson$$ParseValue
   Il2CppObject* Dino_BusSand_App_MiniJson__ParseValue (System_String_o* s, int32_t* i, const
   MethodInfo* method); */

long Dino_BusSand_App_MiniJson__ParseValue_2154e04(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ushort uVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  undefined8 auStack_38 [2];
  
  if ((bRam0000000004f9b7d7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b60);
    FUN_02132f7c(PTR_DAT_04ca9b68);
    FUN_02132f7c(PTR_DAT_04ca9b70);
    bRam0000000004f9b7d7 = 1;
  }
  Dino_BusSand_App_MiniJson__Skip_2155004(param_1,param_2);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*param_2 < *(int *)(param_1 + 0x10)) {
    uVar8 = System_String__get_Chars_46ccb24(param_1,*param_2,0);
    puVar7 = PTR_DAT_04ca9b98;
    puVar6 = PTR_DAT_04ca9b90;
    puVar5 = PTR_DAT_04ca9b78;
    puVar4 = PTR_DAT_04ca9b50;
    puVar3 = PTR_DAT_04ca9b08;
    if (uVar8 < 0x6e) {
      if (uVar8 == 0x22) {
        if ((bRam0000000004f9b7da & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9b78);
          bRam0000000004f9b7da = 1;
        }
        plVar16 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar5);
        System_Text_StringBuilder___ctor_46db61c(plVar16,0);
        *param_2 = *param_2 + 1;
        if (param_1 != 0) {
LAB_02255420:
          iVar10 = *param_2;
          if (iVar10 < *(int *)(param_1 + 0x10)) {
            *param_2 = iVar10 + 1;
            uVar11 = System_String__get_Chars_46ccb24(param_1,iVar10,0);
            if ((uVar11 & 0xffff) == 0x5c) {
              iVar10 = *param_2;
              if (*(int *)(param_1 + 0x10) <= iVar10) goto joined_r0x02255558;
              *param_2 = iVar10 + 1;
              uVar11 = System_String__get_Chars_46ccb24(param_1,iVar10,0);
              uVar1 = uVar11 & 0xffff;
              if (uVar1 < 0x67) {
                if (uVar1 != 0x62) {
                  if (uVar1 != 0x66) goto joined_r0x02255558;
                  if (plVar16 != (long *)0x0) {
                    uVar11 = 0xc;
                    goto LAB_022554c0;
                  }
                  goto LAB_022555b4;
                }
                if (plVar16 == (long *)0x0) goto LAB_022555b4;
                uVar11 = 8;
              }
              else {
                if (0x73 < uVar1) {
                  if (uVar1 == 0x74) {
                    if (plVar16 != (long *)0x0) {
                      uVar11 = 9;
                      goto LAB_022554c0;
                    }
                    goto LAB_022555b4;
                  }
                  if (uVar1 != 0x75) goto joined_r0x02255558;
                  if (*param_2 + 4 <= *(int *)(param_1 + 0x10)) {
                    uVar14 = System_String__Substring_46d4848(param_1,*param_2,4,0);
                    uVar12 = System_Int32__Parse_482db40(uVar14,0x203,0);
                    if (plVar16 == (long *)0x0) goto LAB_022555b4;
                    System_Text_StringBuilder__Append_46dd710(plVar16,uVar12,0);
                    *param_2 = *param_2 + 4;
                  }
                  goto LAB_02255420;
                }
                if (uVar1 != 0x6e) {
                  if (uVar1 != 0x72) goto joined_r0x02255558;
                  if (plVar16 != (long *)0x0) {
                    uVar11 = 0xd;
                    goto LAB_022554c0;
                  }
                  goto LAB_022555b4;
                }
                if (plVar16 == (long *)0x0) goto LAB_022555b4;
                uVar11 = 10;
              }
            }
            else {
              if ((uVar11 & 0xffff) == 0x22) goto LAB_02255594;
joined_r0x02255558:
              if (plVar16 == (long *)0x0) goto LAB_022555b4;
            }
LAB_022554c0:
            System_Text_StringBuilder__Append_46dd710(plVar16,uVar11,0);
            goto LAB_02255420;
          }
LAB_02255594:
          if (plVar16 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x022555b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar15 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
            return lVar15;
          }
        }
LAB_022555b4:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (uVar8 == 0x5b) {
        if ((bRam0000000004f9b7d9 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ba0);
          FUN_02132f7c(PTR_DAT_04ca9b98);
          FUN_02132f7c(PTR_DAT_04ca9b90);
          bRam0000000004f9b7d9 = 1;
        }
        lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
        System_Collections_Generic_List_object____ctor_3a8138c(lVar15,*(undefined8 *)puVar7);
        *param_2 = *param_2 + 1;
        Dino_BusSand_App_MiniJson__Skip_2155004(param_1,param_2);
        puVar3 = PTR_DAT_04ca9ba0;
        if (param_1 != 0) {
          iVar10 = *param_2;
          if (iVar10 < *(int *)(param_1 + 0x10)) {
            do {
              sVar9 = System_String__get_Chars_46ccb24(param_1,iVar10,0);
              if (sVar9 == 0x5d) {
                *param_2 = *param_2 + 1;
                return lVar15;
              }
              sVar9 = System_String__get_Chars_46ccb24(param_1,*param_2,0);
              if (sVar9 == 0x2c) {
                *param_2 = *param_2 + 1;
              }
              else {
                uVar14 = Dino_BusSand_App_MiniJson__ParseValue_2154e04(param_1,param_2);
                if (lVar15 == 0) goto LAB_022553bc;
                lVar19 = *(long *)(lVar15 + 0x10);
                lVar20 = *(long *)puVar3;
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                if (lVar19 == 0) goto LAB_022553bc;
                uVar11 = *(uint *)(lVar15 + 0x18);
                if (uVar11 < *(uint *)(lVar19 + 0x18)) {
                  *(uint *)(lVar15 + 0x18) = uVar11 + 1;
                  *(undefined8 *)(lVar19 + (long)(int)uVar11 * 8 + 0x20) = uVar14;
                  thunk_FUN_02134474();
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (lVar15,uVar14,
                             *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                }
              }
              Dino_BusSand_App_MiniJson__Skip_2155004(param_1,param_2);
              iVar10 = *param_2;
            } while (iVar10 < *(int *)(param_1 + 0x10));
          }
          return lVar15;
        }
LAB_022553bc:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* catch() { ... } // from try @ 02254df0 with catch @ 02254ea0 */
      if ((uVar8 != 0x66) ||
         (iVar10 = System_String__CompareOrdinal_46d0544
                             (param_1,*param_2,*(undefined8 *)PTR_DAT_04ca9b68,0,5,0), iVar10 != 0))
      goto LAB_02254fbc;
      puVar18 = &stack0xffffffffffffffd8;
      iVar10 = *param_2 + 5;
    }
    else {
      if (uVar8 == 0x6e) {
        iVar10 = System_String__CompareOrdinal_46d0544
                           (param_1,*param_2,*(undefined8 *)PTR_DAT_04ca9b60,0,4,0);
        if (iVar10 == 0) {
          *param_2 = *param_2 + 4;
          return 0;
        }
LAB_02254fbc:
        if ((bRam0000000004f9b7db & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04caa370);
          FUN_02132f7c(PTR_DAT_04cab938);
          bRam0000000004f9b7db = 1;
        }
        puVar3 = PTR_DAT_04cab938;
        if (param_1 == 0) {
LAB_022556e8:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        iVar2 = *param_2;
        iVar10 = iVar2;
        if (iVar2 < *(int *)(param_1 + 0x10)) {
          do {
            uVar12 = System_String__get_Chars_46ccb24(param_1,iVar10,0);
            if (*(long *)puVar3 == 0) goto LAB_022556e8;
            iVar13 = System_String__IndexOf_46d72c4(*(long *)puVar3,uVar12,0);
            iVar10 = *param_2;
            if (iVar13 < 0) break;
            iVar10 = iVar10 + 1;
            *param_2 = iVar10;
          } while (iVar10 < *(int *)(param_1 + 0x10));
        }
        puVar3 = PTR_DAT_04caa370;
        uVar14 = System_String__Substring_46d4848(param_1,iVar2,iVar10 - iVar2,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        uVar17 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
        System_Double__TryParse_481811c(uVar14,0xa7,uVar17,&stack0xffffffffffffffd8,0);
        auStack_38[0] = 0;
        lVar15 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x80),auStack_38);
        return lVar15;
      }
      if (uVar8 != 0x74) {
        if (uVar8 == 0x7b) {
          if ((bRam0000000004f9b7d8 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04ca9b50);
            FUN_02132f7c(PTR_DAT_04ca9b58);
            FUN_02132f7c(PTR_DAT_04ca9b08);
            bRam0000000004f9b7d8 = 1;
          }
          lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
          System_Collections_Generic_Dictionary_object__object____ctor_34b3628
                    (lVar15,*(undefined8 *)puVar4);
          *param_2 = *param_2 + 1;
          Dino_BusSand_App_MiniJson__Skip_2155004(param_1,param_2);
          puVar3 = PTR_DAT_04ca9b58;
          if (param_1 != 0) {
            iVar10 = *param_2;
            if (iVar10 < *(int *)(param_1 + 0x10)) {
              do {
                sVar9 = System_String__get_Chars_46ccb24(param_1,iVar10,0);
                if (sVar9 == 0x7d) {
                  *param_2 = *param_2 + 1;
                  return lVar15;
                }
                sVar9 = System_String__get_Chars_46ccb24(param_1,*param_2,0);
                if (sVar9 == 0x2c) {
                  *param_2 = *param_2 + 1;
                }
                else {
                  uVar14 = Dino_BusSand_App_MiniJson__ParseString_21553c0(param_1,param_2);
                  Dino_BusSand_App_MiniJson__Skip_2155004(param_1,param_2);
                  if ((*param_2 < *(int *)(param_1 + 0x10)) &&
                     (sVar9 = System_String__get_Chars_46ccb24(param_1,*param_2,0), sVar9 == 0x3a))
                  {
                    *param_2 = *param_2 + 1;
                  }
                  uVar17 = Dino_BusSand_App_MiniJson__ParseValue_2154e04(param_1,param_2);
                  if (lVar15 == 0) goto LAB_0225522c;
                  System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                            (lVar15,uVar14,uVar17,*(undefined8 *)puVar3);
                }
                Dino_BusSand_App_MiniJson__Skip_2155004(param_1,param_2);
                iVar10 = *param_2;
              } while (iVar10 < *(int *)(param_1 + 0x10));
            }
            return lVar15;
          }
LAB_0225522c:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_02254fbc;
      }
      iVar10 = System_String__CompareOrdinal_46d0544
                         (param_1,*param_2,*(undefined8 *)PTR_DAT_04ca9b70,0,4,0);
      if (iVar10 != 0) goto LAB_02254fbc;
      puVar18 = &stack0xffffffffffffffdc;
      iVar10 = *param_2 + 4;
    }
    uVar14 = *(undefined8 *)(PTR_DAT_04ca9ac8 + 0x28);
    *param_2 = iVar10;
    lVar15 = FUN_02133100(uVar14,puVar18);
  }
  else {
    lVar15 = 0;
  }
  return lVar15;
}

