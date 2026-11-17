/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel.Request$$Add
Dino_BusSand_App_UI_CommonGetPanel_Request_o* Dino_BusSand_App_UI_CommonGetPanel_Request__Add (Dino_BusSand_App_UI_CommonGetPanel_Request_o* __this, int32_t id, int64_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel.Request$$Add
   Dino_BusSand_App_UI_CommonGetPanel_Request_o* Dino_BusSand_App_UI_CommonGetPanel_Request__Add
   (Dino_BusSand_App_UI_CommonGetPanel_Request_o* __this, int32_t id, int64_t count, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_CommonGetPanel_Request__Add_22ae578(long param_1,int param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long extraout_x1;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9c2bf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cadda0);
    FUN_02132f7c(PTR_DAT_04cb5fa0);
    bRam0000000004f9c2bf = 1;
  }
  puVar2 = PTR_DAT_04cadda0;
  if ((param_2 < 1) || (param_3 < 1)) {
    return param_1;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    iVar7 = 0;
    do {
      if (*(int *)(lVar6 + 0x18) <= iVar7) {
        uStack_50 = 0;
        uStack_48 = 0;
        System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                  (&uStack_50,param_2,param_3,*(undefined8 *)PTR_DAT_04cae910);
        lVar4 = *(long *)(lVar6 + 0x10);
        lVar5 = *(long *)PTR_DAT_04cae058;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            lVar4 = lVar4 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar4 + 0x20) = uStack_50;
            *(undefined8 *)(lVar4 + 0x28) = uStack_48;
            return param_1;
          }
          System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                    (lVar6,uStack_50,uStack_48,
                     *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          return param_1;
        }
        break;
      }
      iVar3 = System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                        (lVar6,iVar7,*(undefined8 *)puVar2);
      if (iVar3 == param_2) {
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 != 0) {
          System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                    (lVar6,iVar7,*(undefined8 *)puVar2);
          uStack_50 = 0;
          uStack_48 = 0;
          System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                    (&uStack_50,param_2,extraout_x1 + param_3,*(undefined8 *)PTR_DAT_04cae910);
          System_Collections_Generic_List_KeyValuePair_int__long____set_Item_3965598
                    (lVar6,iVar7,uStack_50,uStack_48,*(undefined8 *)PTR_DAT_04cb5fa0);
          return param_1;
        }
        break;
      }
      lVar6 = *(long *)(param_1 + 0x10);
      iVar7 = iVar7 + 1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

