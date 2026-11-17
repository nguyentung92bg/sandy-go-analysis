/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$SameValue
bool Dino_BusSand_App_Meta_MonetizationSettings__SameValue (Il2CppObject* a, Il2CppObject* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$SameValue
   bool Dino_BusSand_App_Meta_MonetizationSettings__SameValue (Il2CppObject* a, Il2CppObject* b,
   const MethodInfo* method); */

ulong Dino_BusSand_App_Meta_MonetizationSettings__SameValue_226b96c(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  
  puVar1 = PTR_DAT_04caec70;
  if ((bRam0000000004f9c0b6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    bRam0000000004f9c0b6 = 1;
  }
  lVar2 = thunk_FUN_0216e7a0(param_1,*(undefined8 *)puVar1);
  if ((lVar2 != 0) && (lVar3 = thunk_FUN_0216e7a0(param_2,*(undefined8 *)puVar1), lVar3 != 0)) {
    iVar5 = *(int *)(lVar2 + 0x18);
    if (iVar5 == *(int *)(lVar3 + 0x18)) {
      if (iVar5 < 1) {
        uVar4 = 1;
      }
      else {
        piVar7 = (int *)(lVar2 + 0x20);
        piVar8 = (int *)(lVar3 + 0x20);
        do {
          iVar5 = iVar5 + -1;
          uVar4 = (ulong)(*piVar7 == *piVar8);
          if (*piVar7 != *piVar8) {
            return uVar4;
          }
          piVar7 = piVar7 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar5 != 0);
      }
    }
    else {
      uVar4 = 0;
    }
    return uVar4;
  }
  if (param_1 == param_2) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
    if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0497cdcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*param_1 + 0x138))(param_1,param_2,*(undefined8 *)(*param_1 + 0x140));
      return uVar4;
    }
  }
  return (ulong)uVar6;
}

