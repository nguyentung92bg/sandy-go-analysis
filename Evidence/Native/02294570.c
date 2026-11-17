/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$SetDead
void Dino_BusSand_App_UI_BattleRoyaleScenePanel__SetDead (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, System_Collections_Generic_List_BattleRoyalePerson__o* infos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$SetDead
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel__SetDead
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this,
   System_Collections_Generic_List_BattleRoyalePerson__o* infos, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel__SetDead_2194570(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  if ((bRam0000000004f9b9b7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadf80);
    FUN_02132f7c(PTR_DAT_04cad708);
    FUN_02132f7c(PTR_DAT_04cadf88);
    FUN_02132f7c(PTR_DAT_04cad7c8);
    bRam0000000004f9b9b7 = 1;
  }
  puVar2 = PTR_DAT_04cadf88;
  puVar1 = PTR_DAT_04cad7c8;
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(param_2 + 0x18);
  }
  lVar3 = *(long *)(param_1 + 0x90);
  if (lVar3 != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar6) {
        return;
      }
      lVar3 = System_Collections_Generic_List_object___get_Item_3a81924
                        (lVar3,iVar6,*(undefined8 *)puVar1);
      if ((lVar3 == 0) ||
         (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0), lVar3 == 0)) break;
      UnityEngine_GameObject__SetActive_43c1408(lVar3,iVar6 < iVar7,0);
      if (iVar6 < iVar7) {
        if ((*(long *)(param_1 + 0x90) == 0) ||
           (uVar4 = System_Collections_Generic_List_object___get_Item_3a81924
                              (*(long *)(param_1 + 0x90),iVar6,*(undefined8 *)puVar1), param_2 == 0)
           ) break;
        uVar5 = System_Collections_Generic_List_object___get_Item_3a81924
                          (param_2,iVar6,*(undefined8 *)puVar2);
        Dino_BusSand_App_UI_BattleRoyaleUi__SetHead_219c98c(uVar4,uVar5,0);
      }
      lVar3 = *(long *)(param_1 + 0x90);
      iVar6 = iVar6 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

