/* IL2CPP: Dino.BusSand.App.Ads.<>c__DisplayClass43_0$$<ShowInterstitialIfAllowed>b__0
void Dino_BusSand_App_Ads___c__DisplayClass43_0___ShowInterstitialIfAllowed_b__0 (Dino_BusSand_App_Ads___c__DisplayClass43_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads.<>c__DisplayClass43_0$$<ShowInterstitialIfAllowed>b__0
   void Dino_BusSand_App_Ads___c__DisplayClass43_0___ShowInterstitialIfAllowed_b__0
   (Dino_BusSand_App_Ads___c__DisplayClass43_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Ads___c__DisplayClass43_0___ShowInterstitialIfAllowed_b__0_2178af4
               (long param_1)

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
  if ((bRam0000000004f9b8f2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420);
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cad098);
    FUN_02132f7c(PTR_DAT_04cad180);
    bRam0000000004f9b8f2 = 1;
  }
  puVar3 = PTR_DAT_04cad180;
  puVar2 = PTR_DAT_04cac420;
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  plVar9 = (long *)**(undefined8 **)(lVar4 + 0xb8);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Action_bool____ctor_35ee0e8(uVar5,param_1,*(undefined8 *)puVar3,0);
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
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_02278bf8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)PTR_DAT_04cad098,2);
LAB_02278bf8:
                    /* WARNING: Could not recover jumptable at 0x02278c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(plVar9,uVar10,uVar5,puVar6[1]);
  return;
}

