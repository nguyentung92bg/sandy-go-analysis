/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$HudClaimables
int32_t Dino_BusSand_App_UI_PassportUi__HudClaimables (Dino_BusSand_App_Meta_PassportFeature_o* f, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$HudClaimables
   int32_t Dino_BusSand_App_UI_PassportUi__HudClaimables (Dino_BusSand_App_Meta_PassportFeature_o*
   f, const MethodInfo* method); */

int Dino_BusSand_App_UI_PassportUi__HudClaimables_21dc850(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0(param_1,0);
                    /* catch() { ... } // from try @ 022dc7f4 with catch @ 022dc868 */
                    /* catch() { ... } // from try @ 022dc6cc with catch @ 022dc86c */
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 022dc5f8 with catch @ 022dc870 */
    iVar5 = 0;
                    /* catch() { ... } // from try @ 022dc76c with catch @ 022dc874 */
    iVar1 = 0;
    do {
      uVar2 = Dino_BusSand_App_Meta_PassportFeature__CanClaimFreeForHud_2247214(param_1,iVar5,0);
                    /* try { // try from 022dc890 to 023dc9cf has its CatchHandler @ 022dc890
                       catch() { ... } // from try @ 022dc890 with catch @ 022dc890
                       catch() { ... } // from try @ 022dce08 with catch @ 022dc890 */
      uVar3 = Dino_BusSand_App_Meta_PassportFeature__CanClaimPassForHud_2247250(param_1,iVar5,0);
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + (uVar2 & 1) + (uVar3 & 1);
      iVar4 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0(param_1,0);
    } while (iVar5 < iVar4);
  }
  return iVar1;
}

