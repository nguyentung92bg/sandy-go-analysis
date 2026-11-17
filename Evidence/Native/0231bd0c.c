/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$Count
int32_t Dino_BusSand_App_Meta_JourneyTracking__Count (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$Count
   int32_t Dino_BusSand_App_Meta_JourneyTracking__Count (int32_t id, const MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking__Count_221bd0c(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd9e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd9e = 1;
  }
  puVar1 = PTR_DAT_04caa200;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_Meta_Profile__Count_225b150(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar3 = System_Math__Min_4831124(0x7fffffff,uVar3,0);
  System_Math__Max_4830fd4(0,uVar3,0);
  return;
}

