/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSave$$get_HasAgentSnapshot
bool Dino_BusSand_App_Meta_RacingRobotSave__get_HasAgentSnapshot (Dino_BusSand_App_Meta_RacingRobotSave_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSave$$get_HasAgentSnapshot
   bool Dino_BusSand_App_Meta_RacingRobotSave__get_HasAgentSnapshot
   (Dino_BusSand_App_Meta_RacingRobotSave_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_RacingRobotSave__get_HasAgentSnapshot_225facc(long param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((bRam0000000004f9c034 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae228);
    bRam0000000004f9c034 = 1;
  }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0235fa70 with catch @ 0235faf8
                        */
  if (((*(long *)(param_1 + 0x30) == 0) ||
      (iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 0x18), iVar1 < 1)) ||
     (*(long *)(param_1 + 0x38) == 0)) {
                    /* try { // try from 0235fb24 to 0245fb27 has its CatchHandler @ 0235fb74 */
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(*(long *)(param_1 + 0x38) + 0x18) == iVar1;
  }
                    /* try { // try from 0235fb28 to 0245fb63 has its CatchHandler @ 0235f9c0 */
  return bVar2;
}

