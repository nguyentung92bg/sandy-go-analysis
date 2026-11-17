/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$WinReward
void Dino_BusSand_App_Meta_EconomySettings__WinReward (Dino_BusSand_App_Meta_EconomySettings_Parsed_o* p, Il2CppObject* v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$WinReward
   void Dino_BusSand_App_Meta_EconomySettings__WinReward
   (Dino_BusSand_App_Meta_EconomySettings_Parsed_o* p, Il2CppObject* v, const MethodInfo* method);
    */

void Dino_BusSand_App_Meta_EconomySettings__WinReward_2209124(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  double dStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000004f9bcde & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa2f0);
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04caa2f8);
    FUN_02132f7c(PTR_DAT_04caa300);
    FUN_02132f7c(PTR_DAT_04caa308);
    FUN_02132f7c(PTR_DAT_04caa310);
    FUN_02132f7c(PTR_DAT_04caa318);
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04cb2018);
    FUN_02132f7c(PTR_DAT_04cb2020);
    FUN_02132f7c(PTR_DAT_04cb1f30);
    FUN_02132f7c(PTR_DAT_04caca40);
    FUN_02132f7c(PTR_DAT_04cb2028);
    FUN_02132f7c(PTR_DAT_04cb2030);
    FUN_02132f7c(PTR_DAT_04cb2038);
    FUN_02132f7c(PTR_DAT_04cb2040);
    FUN_02132f7c(PTR_DAT_04cb2048);
    FUN_02132f7c(PTR_DAT_04cb2050);
    bRam0000000004f9bcde = 1;
  }
  puVar3 = PTR_DAT_04cab718;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_98 = 0;
  lVar10 = Dino_BusSand_App_MiniJson__Obj_21561ec(param_2,0);
  puVar8 = PTR_DAT_04cb2050;
  puVar7 = PTR_DAT_04cb2040;
  puVar6 = PTR_DAT_04cb2038;
  puVar5 = PTR_DAT_04cb1f30;
  puVar4 = PTR_DAT_04cb1d58;
  puVar2 = PTR_DAT_04caa300;
  if (lVar10 == 0) {
    if ((param_1 != 0) && (lVar10 = *(long *)(param_1 + 0x40), lVar10 != 0)) {
      lVar16 = *(long *)(lVar10 + 0x10);
      uVar14 = *(undefined8 *)PTR_DAT_04cb2028;
      lVar18 = *(long *)puVar3;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar16 != 0) {
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          puVar17 = (undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
          *puVar17 = uVar14;
        }
        else {
          uVar1 = *(uint *)(lVar10 + 0x18);
          System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                    (lVar10,uVar1 + 1,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) +
                                                    0x70) + 0x20) + 0xc0) + 0x78));
          lVar16 = *(long *)(lVar10 + 0x10);
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(uint *)(lVar16 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          puVar17 = (undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
          *puVar17 = uVar14;
        }
        if (iRam00000000051c1b10 != 0) {
          FUN_02220bf0(1L << ((ulong)puVar17 >> 0xc & 0x3f),
                       ((ulong)puVar17 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
        }
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
            (&uStack_c0,lVar10,*(undefined8 *)PTR_DAT_04caa2f0);
  uStack_90 = uStack_c0;
  uStack_c0 = 0;
  uStack_88 = puStack_b8;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_70 = uStack_a0;
  puStack_b8 = &uStack_90;
LAB_023092bc:
  do {
    uVar11 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                       (&uStack_90,*(undefined8 *)puVar2);
    uVar12 = uStack_78;
    uVar14 = uStack_80;
    if ((uVar11 & 1) == 0) {
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
                (&uStack_90,*(undefined8 *)PTR_DAT_04caa2f8);
      return;
    }
    uVar11 = System_String__op_Equality_46d1108(uStack_80,*(undefined8 *)puVar8,0);
    plVar15 = (long *)puVar8;
    if (((uVar11 & 1) == 0) &&
       (uVar11 = System_String__op_Equality_46d1108(uVar14,*(undefined8 *)puVar6,0),
       plVar15 = (long *)puVar6, (uVar11 & 1) == 0)) {
      uVar11 = System_String__op_Equality_46d1108(uVar14,*(undefined8 *)PTR_DAT_04cb2048,0);
      plVar15 = (long *)PTR_DAT_04cb2018;
      if ((uVar11 & 1) != 0) goto LAB_02309324;
    }
    else {
LAB_02309324:
      lVar10 = *plVar15;
      if (lVar10 != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        bVar9 = Dino_BusSand_App_Meta_EconomySettings__Whole_22087a0(uVar12,&lStack_98);
        if (((bVar9 & -1 < lStack_98) == 1) && (lStack_98 < 10000)) {
          dStack_c8 = (double)lStack_98;
          uVar12 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x80),&dStack_c8);
          uVar13 = System_Int64__ToString_482e7e4(&lStack_98,0);
          uVar14 = System_String__Concat_46d30e8
                             (*(undefined8 *)puVar7,uVar14,*(undefined8 *)PTR_DAT_04caca40,uVar13,0)
          ;
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          Dino_BusSand_App_Meta_EconomySettings_Parsed__Set_220a8d8
                    (param_1,*(undefined8 *)PTR_DAT_04cb2020,lVar10,uVar12,uVar14);
          goto LAB_023092bc;
        }
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar10 = *(long *)(param_1 + 0x40);
        uVar14 = System_String__Concat_46d2b84
                           (*(undefined8 *)puVar7,uVar14,*(undefined8 *)PTR_DAT_04cb2030,0);
        if (lVar10 != 0) {
          lVar16 = *(long *)(lVar10 + 0x10);
          lVar18 = *(long *)puVar3;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar16 != 0) {
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (uVar1 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar10,uVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_023092bc;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar10 = *(long *)(param_1 + 0x40);
    uVar14 = System_String__Concat_46d2b84(*(undefined8 *)puVar7,uVar14,*(undefined8 *)puVar5,0);
    if (lVar10 == 0) {
LAB_023095b4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar16 = *(long *)(lVar10 + 0x10);
    lVar18 = *(long *)puVar3;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar16 == 0) goto LAB_023095b4;
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
      thunk_FUN_02134474();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (lVar10,uVar14,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
}

