/* IL2CPP: Dino.BusSand.App.Meta.Profile$$GrantReward
void Dino_BusSand_App_Meta_Profile__GrantReward (int32_t rewardId, System_String_o* reason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$GrantReward
   void Dino_BusSand_App_Meta_Profile__GrantReward (int32_t rewardId, System_String_o* reason, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_Profile__GrantReward_227342c(undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
                    /* try { // try from 0237342c to 02473437 has its CatchHandler @ 02373340 */
  puVar1 = PTR_DAT_04cac018;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02373428 with catch @ 02373434
                        */
  if ((bRam0000000004f9c105 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb07f8);
    FUN_02132f7c(PTR_DAT_04cad280);
    bRam0000000004f9c105 = 1;
  }
  puVar2 = PTR_DAT_04cb07f8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar9 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar2,param_1,0);
  puVar1 = PTR_DAT_04cabaf8;
  if (lVar9 == 0) {
    return;
  }
  uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar9,*(undefined8 *)PTR_DAT_04cad280,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  if ((bRam0000000004f9c104 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb20a8);
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
  lVar9 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar10,0);
  puVar4 = PTR_DAT_04cb20b0;
  puVar3 = PTR_DAT_04cb20a8;
  puVar2 = PTR_DAT_04cb15c0;
  puVar1 = PTR_DAT_04cabaf8;
  if (lVar9 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_88,lVar9,*(undefined8 *)PTR_DAT_04cb20c0);
    uStack_60 = uStack_78;
    uStack_68 = puStack_80;
    uStack_70 = uStack_88;
    uStack_88 = 0;
    puStack_80 = &uStack_70;
LAB_023732a8:
    uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_70,*(undefined8 *)puVar4);
    if ((uVar7 & 1) != 0) {
      lVar9 = Dino_BusSand_App_MiniJson__Arr_2156264(uStack_60,0);
      if ((lVar9 != 0) && (1 < *(int *)(lVar9 + 0x18))) {
        uVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                           (lVar9,0,*(undefined8 *)puVar2);
        iVar5 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar10,0,0);
        uVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                           (lVar9,1,*(undefined8 *)puVar2);
        uVar10 = Dino_BusSand_App_MiniJson__Long_2156378(uVar10,0,0);
        if (2 < *(int *)(lVar9 + 0x18)) {
          uVar8 = System_Collections_Generic_List_object___get_Item_3a81924
                            (lVar9,2,*(undefined8 *)puVar2);
          iVar6 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar8,0,0);
          if (iVar6 != 0) {
            if (iVar5 == 0x3ea) {
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_Meta_Profile__AddInfiniteHearts_2273010(uVar10,param_2);
            }
            goto LAB_023732a8;
          }
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_Profile__Add_2272578(iVar5,uVar10,param_2);
      }
      goto LAB_023732a8;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_70,*(undefined8 *)puVar3);
  }
  return;
}

