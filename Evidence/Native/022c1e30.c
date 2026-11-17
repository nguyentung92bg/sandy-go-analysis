/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$RefreshPath
void Dino_BusSand_App_UI_StreakEventPanel__RefreshPath (Dino_BusSand_App_UI_StreakEventPanel_o* __this, int32_t reached, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$RefreshPath
   void Dino_BusSand_App_UI_StreakEventPanel__RefreshPath (Dino_BusSand_App_UI_StreakEventPanel_o*
   __this, int32_t reached, const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakEventPanel__RefreshPath_21c1e30(long param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  
  if ((bRam0000000004f9bae8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cafcd8);
    FUN_02132f7c(PTR_DAT_04cafce0);
    FUN_02132f7c(PTR_DAT_04cafce8);
    FUN_02132f7c(PTR_DAT_04cafc08);
    FUN_02132f7c(PTR_DAT_04caf398);
    FUN_02132f7c(PTR_DAT_04cafcf0);
    bRam0000000004f9bae8 = 1;
  }
  puVar7 = PTR_DAT_04cafcf0;
  puVar6 = PTR_DAT_04cafce8;
  puVar5 = PTR_DAT_04cafce0;
  puVar4 = PTR_DAT_04cafc08;
  puVar3 = PTR_DAT_04caf398;
  if (*(long *)(param_1 + 0x98) != 0) {
    iVar2 = *(int *)(*(long *)(param_1 + 0x98) + 0x18);
    if (0 < iVar2) {
      iVar11 = 0;
      do {
        if ((*(long *)(param_1 + 0x98) == 0) ||
           (lVar8 = System_Collections_Generic_List_object___get_Item_3a81924
                              (*(long *)(param_1 + 0x98),iVar11,*(undefined8 *)puVar5), lVar8 == 0))
        goto LAB_022c206c;
        lVar12 = *(long *)(lVar8 + 0x18);
        puVar1 = (undefined8 *)puVar6;
        if (param_2 <= iVar11) {
          puVar1 = (undefined8 *)puVar4;
        }
        uVar9 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*puVar1,0);
        if (lVar12 == 0) goto LAB_022c206c;
        UnityEngine_UI_Image__set_sprite_44a7258(lVar12,uVar9,0);
        plVar13 = *(long **)(lVar8 + 0x38);
        puVar1 = (undefined8 *)puVar7;
        if (param_2 <= iVar11) {
          puVar1 = (undefined8 *)puVar3;
        }
        lVar12 = Dino_BusSand_App_UI_UiSkin__Mat_22a2b68(*puVar1,0);
        if (lVar12 == 0) {
          plVar10 = *(long **)(lVar8 + 0x38);
          if (plVar10 == (long *)0x0) goto LAB_022c206c;
          lVar12 = (**(code **)(*plVar10 + 0x528))(plVar10,*(undefined8 *)(*plVar10 + 0x530));
        }
        if (plVar13 == (long *)0x0) goto LAB_022c206c;
        (**(code **)(*plVar13 + 0x538))(plVar13,lVar12,*(undefined8 *)(*plVar13 + 0x540));
        if ((*(long *)(lVar8 + 0x20) == 0) ||
           (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar8 + 0x20),0),
           lVar12 == 0)) goto LAB_022c206c;
        UnityEngine_GameObject__SetActive_43c1408(lVar12,param_2 <= iVar11,0);
        if ((*(long *)(lVar8 + 0x28) == 0) ||
           (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar8 + 0x28),0),
           lVar8 == 0)) goto LAB_022c206c;
                    /* try { // try from 022c1fcc to 023c1fcf has its CatchHandler @ 022c2014 */
                    /* try { // try from 022c1fd0 to 023c1fd3 has its CatchHandler @ 022c1ffc */
                    /* catch() { ... } // from try @ 022c1e08 with catch @ 022c1fd4
                       try { // try from 022c1fd4 to 023c2027 has its CatchHandler @ 022c1d58 */
        UnityEngine_GameObject__SetActive_43c1408(lVar8,iVar11 < param_2,0);
        iVar11 = iVar11 + 1;
      } while (iVar2 != iVar11);
      if ((0 < param_2) && (0 < iVar2)) {
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_022c206c;
                    /* catch() { ... } // from try @ 022c1fd0 with catch @ 022c1ffc */
        UnityEngine_RectTransform__get_sizeDelta_43cf9ac(*(long *)(param_1 + 0x58),0);
      }
    }
    lVar8 = *(long *)(param_1 + 0x60);
    if (lVar8 != 0) {
      if ((bRam0000000004fa8a8a & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7bc8,0);
        bRam0000000004fa8a8a = 1;
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
      }
      if (pcRam0000000004fa8ae0 == (code *)0x0) {
        pcRam0000000004fa8ae0 = (code *)FUN_02132f40(&UNK_00e51f73);
      }
      (*pcRam0000000004fa8ae0)(lVar8,&stack0xffffffffffffffe8);
      return;
    }
  }
LAB_022c206c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

