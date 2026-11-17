/* IL2CPP: Dino.BusSand.App.Ads$$RewardedAvailable
bool Dino_BusSand_App_Ads__RewardedAvailable (System_String_o* slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads$$RewardedAvailable
   bool Dino_BusSand_App_Ads__RewardedAvailable (System_String_o* slot, const MethodInfo* method);
    */

void Dino_BusSand_App_Ads__RewardedAvailable_2176af8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_04cabaa8;
  if ((bRam0000000004f9b8e2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cad098);
    bRam0000000004f9b8e2 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  plVar6 = (long *)**(undefined8 **)(lVar2 + 0xb8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar2 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_04cad098) {
        puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_02276bac;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)PTR_DAT_04cad098,0);
LAB_02276bac:
                    /* WARNING: Could not recover jumptable at 0x02276bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar6,param_1,puVar3[1]);
  return;
}

