/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider$$RewardedReady
bool Dino_BusSand_Sdk_DinoAdProvider__RewardedReady (Dino_BusSand_Sdk_DinoAdProvider_o* __this, System_String_o* slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider$$RewardedReady
   bool Dino_BusSand_Sdk_DinoAdProvider__RewardedReady (Dino_BusSand_Sdk_DinoAdProvider_o* __this,
   System_String_o* slot, const MethodInfo* method); */

uint Dino_BusSand_Sdk_DinoAdProvider__RewardedReady_2430a00(void)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *plStack_18;
  
  if ((bRam0000000004f9cc17 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa8c8);
    bRam0000000004f9cc17 = 1;
  }
  plStack_18 = (long *)0x0;
  uVar3 = Dino_BusSand_Sdk_DinoAdProvider__TryService_243099c(&plStack_18);
  plVar1 = plStack_18;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (plStack_18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar5 = *plStack_18;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_04caa8c8) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_02530aa0;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0216b7a4(plStack_18,*(long *)PTR_DAT_04caa8c8,4);
LAB_02530aa0:
    uVar2 = (*(code *)*puVar4)(plVar1,puVar4[1]);
  }
  return uVar2 & 1;
}

