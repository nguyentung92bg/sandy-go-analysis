/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$BindContinuePanel
void Dino_BusSand_App_Meta_ClimbTowerFeature__BindContinuePanel (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, Dino_BusSand_App_UI_UIPanel_o* panel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$BindContinuePanel
   void Dino_BusSand_App_Meta_ClimbTowerFeature__BindContinuePanel
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, Dino_BusSand_App_UI_UIPanel_o* panel, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_ClimbTowerFeature__BindContinuePanel_222cf7c
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04ca9ae8;
                    /* try { // try from 0232cf80 to 0242cf87 has its CatchHandler @ 0232d19c */
                    /* try { // try from 0232cf94 to 0242cf9b has its CatchHandler @ 0232d1ac */
  if ((bRam0000000004f9be45 & 1) == 0) {
                    /* try { // try from 0232cfa8 to 0242cfab has its CatchHandler @ 0232d180 */
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 0232cfc0 to 0242cfc7 has its CatchHandler @ 0232d1c0 */
    FUN_02132f7c(PTR_DAT_04cadb50);
    FUN_02132f7c(PTR_DAT_04cb1300);
                    /* try { // try from 0232cfdc to 0242cfe3 has its CatchHandler @ 0232d198 */
    FUN_02132f7c(PTR_DAT_04cb12d0);
    bRam0000000004f9be45 = 1;
  }
                    /* try { // try from 0232cff0 to 0242cff7 has its CatchHandler @ 0232d1a8 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0232d004 to 0242d01b has its CatchHandler @ 0232d18c */
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
                    /* try { // try from 0232d01c to 0242d033 has its CatchHandler @ 0232d1a4 */
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar4 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_2,*(undefined8 *)PTR_DAT_04cadb50,0);
  Dino_BusSand_App_Meta_ClimbTowerFeature__BindProcess_222d0f0(param_1,uVar4);
                    /* try { // try from 0232d044 to 0242d04b has its CatchHandler @ 0232d1bc */
  lVar5 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_2,*(undefined8 *)PTR_DAT_04cb1300,0);
                    /* try { // try from 0232d064 to 0242d08b has its CatchHandler @ 0232d1d4 */
  lVar8 = *(long *)PTR_DAT_04ca9d18;
  lVar7 = *(long *)(lVar8 + 0x38);
  if (lVar7 == 0) {
    FUN_0216b4cc(lVar8);
    lVar7 = *(long *)(lVar8 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
                    /* try { // try from 0232d098 to 0242d0a3 has its CatchHandler @ 0232d1b8 */
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
                    /* try { // try from 0232d0bc to 0242d0c7 has its CatchHandler @ 0232d194 */
  uVar4 = Dino_BusSand_App_Meta_StreakTowerUtil__L_2251bd4
                    (*(undefined8 *)PTR_DAT_04cb12d0,**(undefined8 **)(lVar7 + 0xb8),0);
  puVar2 = PTR_DAT_04ca9ae8;
                    /* try { // try from 0232d0e8 to 0242d0f3 has its CatchHandler @ 0232d1b4 */
  if ((bRam0000000004f9be49 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9be49 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
  if ((uVar3 & 1) == 0) {
    if ((lVar5 == 0) ||
       (lVar5 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                          (lVar5,1,*(undefined8 *)PTR_DAT_04cada48), lVar5 == 0)) {
LAB_0232d418:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      lVar7 = 0;
      do {
        if (uVar1 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar6 = *(long **)(lVar5 + 0x20 + lVar7 * 8);
        if (plVar6 == (long *)0x0) goto LAB_0232d418;
        (**(code **)(*plVar6 + 0x518))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x520));
        uVar1 = *(uint *)(lVar5 + 0x18);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar1);
    }
  }
  return;
}

