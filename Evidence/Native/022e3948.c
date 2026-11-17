/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel$$InitRate
void Dino_BusSand_App_UI_StreakRatePanel__InitRate (Dino_BusSand_App_UI_StreakRatePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel$$InitRate
   void Dino_BusSand_App_UI_StreakRatePanel__InitRate (Dino_BusSand_App_UI_StreakRatePanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakRatePanel__InitRate_21e3948(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iStack_34;
  
  if ((bRam0000000004f9bbbf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabb10);
    FUN_02132f7c(PTR_DAT_04cb0d60);
    FUN_02132f7c(PTR_DAT_04cb0d68);
    bRam0000000004f9bbbf = 1;
  }
  puVar3 = PTR_DAT_04cb0d68;
  puVar2 = PTR_DAT_04cb0d60;
  puVar1 = PTR_DAT_04cabb10;
  iVar6 = 0;
  iStack_34 = 0;
  do {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iStack_34 = Dino_BusSand_App_Meta_StreakRateFeature__RateNumber_224c86c
                          (*(long *)(param_1 + 0x38),iVar6,0);
    uVar4 = System_Int32__ToString_482d750(&iStack_34,0);
    uVar4 = System_String__Concat_46c82e0(*(undefined8 *)puVar1,uVar4,0);
    iVar6 = iVar6 + 1;
    iStack_34 = iVar6;
    uVar5 = System_Int32__ToString_482d750(&iStack_34,0);
    uVar5 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,uVar5,0);
    Dino_BusSand_App_UI_UIPanel__Txt_2200924(param_1,uVar5,uVar4,0);
    iStack_34 = iVar6;
    uVar5 = System_Int32__ToString_482d750(&iStack_34,0);
                    /* try { // try from 022e3a44 to 023e3a4b has its CatchHandler @ 022e3a88 */
    uVar5 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,uVar5,0);
    Dino_BusSand_App_UI_UIPanel__Txt_2200924(param_1,uVar5,uVar4,0);
  } while (iVar6 != 3);
                    /* try { // try from 022e3a74 to 023e3a77 has its CatchHandler @ 022e3ac8 */
                    /* try { // try from 022e3a78 to 023e3a87 has its CatchHandler @ 022e3aa8 */
  return;
}

