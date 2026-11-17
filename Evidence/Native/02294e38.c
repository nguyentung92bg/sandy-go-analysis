/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$RefreshDecoration
void Dino_BusSand_App_UI_BattleRoyaleScenePanel__RefreshDecoration (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$RefreshDecoration
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel__RefreshDecoration
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel__RefreshDecoration_2194e38(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((bRam0000000004f9b9bc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad708);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cad7c8);
    FUN_02132f7c(PTR_DAT_04cae230);
    FUN_02132f7c(PTR_DAT_04cae250);
    FUN_02132f7c(PTR_DAT_04cae258);
    FUN_02132f7c(PTR_DAT_04cae260);
    bRam0000000004f9b9bc = 1;
  }
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar8 != 0)) {
    lVar8 = *(long *)(lVar8 + 0x68);
    if ((lVar8 == 0) || (*(int *)(lVar8 + 0x18) == 0)) {
      return;
    }
    uVar7 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cae260,0);
    puVar2 = PTR_DAT_04cae230;
    iVar6 = System_Collections_Generic_List_int___get_Item_3a2bd74
                      (lVar8,0,*(undefined8 *)PTR_DAT_04cae230);
    if (iVar6 == 1) {
      bVar5 = true;
    }
    else {
      iVar6 = System_Collections_Generic_List_int___get_Item_3a2bd74(lVar8,0,*(undefined8 *)puVar2);
      bVar5 = iVar6 == 3;
    }
    Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(uVar7,bVar5,0);
    puVar4 = PTR_DAT_04cae258;
    puVar3 = PTR_DAT_04cae250;
    puVar2 = PTR_DAT_04cad7c8;
    lVar8 = *(long *)(param_1 + 0x68);
    if (lVar8 != 0) {
      iVar6 = 0;
      while( true ) {
        iVar1 = *(int *)(lVar8 + 0x18);
        if (iVar1 <= iVar6) {
          return;
        }
                    /* try { // try from 02294f6c to 02394fd7 has its CatchHandler @ 02295154 */
        lVar8 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar8,iVar6,*(undefined8 *)puVar2);
        if (lVar8 == 0) break;
        iVar1 = iVar1 + -1;
        uVar7 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)puVar4,0);
        Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(uVar7,iVar6 != iVar1,0);
        if ((*(long *)(param_1 + 0x68) == 0) ||
           (lVar8 = System_Collections_Generic_List_object___get_Item_3a81924
                              (*(long *)(param_1 + 0x68),iVar6,*(undefined8 *)puVar2), lVar8 == 0))
        break;
        uVar7 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)puVar3,0);
        Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(uVar7,iVar6 != iVar1,0);
                    /* try { // try from 02294fd8 to 0239516f has its CatchHandler @ 02294d70 */
        lVar8 = *(long *)(param_1 + 0x68);
        iVar6 = iVar6 + 1;
        if (lVar8 == 0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

