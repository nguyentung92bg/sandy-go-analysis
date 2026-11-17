/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$GrantFirstReward
void Dino_BusSand_App_Meta_YachtRacingCore__GrantFirstReward (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, System_Collections_Generic_List_object__o* entry, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$GrantFirstReward
   void Dino_BusSand_App_Meta_YachtRacingCore__GrantFirstReward
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, System_Collections_Generic_List_object__o*
   entry, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingCore__GrantFirstReward_2257fc8
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((bRam0000000004f9bff2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ba0);
    FUN_02132f7c(PTR_DAT_04ca9b98);
    FUN_02132f7c(PTR_DAT_04ca9b90);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cacef0);
    bRam0000000004f9bff2 = 1;
  }
  puVar2 = PTR_DAT_04cabaf8;
  if (param_2 != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar2;
    }
    if (*(long *)(*(long *)(lVar8 + 0xb8) + 0x10) != 0) {
      lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b90);
      System_Collections_Generic_List_object____ctor_3a8138c(lVar8,*(undefined8 *)PTR_DAT_04ca9b98);
      if (lVar8 != 0) {
        lVar14 = *(long *)(lVar8 + 0x10);
        lVar15 = *(long *)PTR_DAT_04ca9ba0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            plVar9 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *plVar9 = param_2;
            thunk_FUN_02134474(plVar9,param_2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar8,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar13 = *(undefined8 *)PTR_DAT_04cacef0;
          if ((bRam0000000004f9c104 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cb20a8,uVar13,0);
            FUN_02132f7c(PTR_DAT_04cb20b0);
            FUN_02132f7c(PTR_DAT_04cb20b8);
            FUN_02132f7c(PTR_DAT_04cb20c0);
            FUN_02132f7c(PTR_DAT_04cabaf0);
            FUN_02132f7c(PTR_DAT_04cb15c0);
            FUN_02132f7c(PTR_DAT_04cabaf8);
            bRam0000000004f9c104 = 1;
          }
          uStack_70 = 0;
          uStack_68 = 0;
          uStack_60 = 0;
          lVar8 = Dino_BusSand_App_MiniJson__Arr_2156264(lVar8,0);
          puVar5 = PTR_DAT_04cb20b0;
          puVar4 = PTR_DAT_04cb20a8;
          puVar3 = PTR_DAT_04cb15c0;
          puVar2 = PTR_DAT_04cabaf8;
          if (lVar8 != 0) {
            System_Collections_Generic_List_object___GetEnumerator_3a825f0
                      (&uStack_88,lVar8,*(undefined8 *)PTR_DAT_04cb20c0);
            uStack_60 = uStack_78;
            uStack_68 = puStack_80;
            uStack_70 = uStack_88;
            uStack_88 = 0;
            puStack_80 = &uStack_70;
LAB_023732a8:
            uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_70,*(undefined8 *)puVar5);
            if ((uVar10 & 1) != 0) {
              lVar8 = Dino_BusSand_App_MiniJson__Arr_2156264(uStack_60,0);
              if ((lVar8 != 0) && (1 < *(int *)(lVar8 + 0x18))) {
                uVar11 = System_Collections_Generic_List_object___get_Item_3a81924
                                   (lVar8,0,*(undefined8 *)puVar3);
                iVar6 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar11,0,0);
                uVar11 = System_Collections_Generic_List_object___get_Item_3a81924
                                   (lVar8,1,*(undefined8 *)puVar3);
                uVar11 = Dino_BusSand_App_MiniJson__Long_2156378(uVar11,0,0);
                if (2 < *(int *)(lVar8 + 0x18)) {
                  uVar12 = System_Collections_Generic_List_object___get_Item_3a81924
                                     (lVar8,2,*(undefined8 *)puVar3);
                  iVar7 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar12,0,0);
                  if (iVar7 != 0) {
                    if (iVar6 == 0x3ea) {
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      Dino_BusSand_App_Meta_Profile__AddInfiniteHearts_2273010(uVar11,uVar13);
                    }
                    goto LAB_023732a8;
                  }
                }
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                Dino_BusSand_App_Meta_Profile__Add_2272578(iVar6,uVar11,uVar13);
              }
              goto LAB_023732a8;
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_70,*(undefined8 *)puVar4);
          }
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

