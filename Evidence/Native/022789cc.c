/* IL2CPP: Dino.BusSand.App.Ads.<>c__DisplayClass35_0$$<ShowRewarded>b__4
void Dino_BusSand_App_Ads___c__DisplayClass35_0___ShowRewarded_b__4 (Dino_BusSand_App_Ads___c__DisplayClass35_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads.<>c__DisplayClass35_0$$<ShowRewarded>b__4
   void Dino_BusSand_App_Ads___c__DisplayClass35_0___ShowRewarded_b__4
   (Dino_BusSand_App_Ads___c__DisplayClass35_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Ads___c__DisplayClass35_0___ShowRewarded_b__4_21789cc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_DAT_04cabaa8;
                    /* catch() { ... } // from try @ 02278980 with catch @ 022789d4 */
  if ((bRam0000000004f9b8f0 & 1) == 0) {
                    /* try { // try from 022789f4 to 023789f7 has its CatchHandler @ 02278a00 */
    FUN_02132f7c(PTR_DAT_04cad170);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022789f4 with catch @ 02278a00
                        */
                    /* catch() { ... } // from try @ 02278a48 with catch @ 02278a04 */
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cad098);
    FUN_02132f7c(PTR_DAT_04cad178);
    bRam0000000004f9b8f0 = 1;
  }
  puVar3 = PTR_DAT_04cad178;
  puVar2 = PTR_DAT_04cad170;
  lVar4 = *(long *)puVar1;
                    /* try { // try from 02278a3c to 02378a47 has its CatchHandler @ 02278aec */
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
                    /* try { // try from 02278a48 to 02378b0b has its CatchHandler @ 02278a04 */
    lVar4 = *(long *)puVar1;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  plVar9 = (long *)**(undefined8 **)(lVar4 + 0xb8);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Action_bool__object____ctor_35f6c44(uVar5,param_1,*(undefined8 *)puVar3,0);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar4 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04cad098) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_02278ad0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)PTR_DAT_04cad098,1);
LAB_02278ad0:
                    /* WARNING: Could not recover jumptable at 0x02278aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 02278a3c with catch @ 02278aec */
  (*(code *)*puVar6)(plVar9,uVar10,uVar5,puVar6[1]);
  return;
}

