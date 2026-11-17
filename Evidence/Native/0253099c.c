/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider$$TryService
bool Dino_BusSand_Sdk_DinoAdProvider__TryService (Dino_Common_IAdService_o** service, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider$$TryService
   bool Dino_BusSand_Sdk_DinoAdProvider__TryService (Dino_Common_IAdService_o** service, const
   MethodInfo* method); */

bool Dino_BusSand_Sdk_DinoAdProvider__TryService_243099c(long *param_1)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_04cbefd8;
  if ((bRam0000000004f9cc16 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbefd8);
    bRam0000000004f9cc16 = 1;
  }
  uVar3 = Dino_IGlobalService_object___TryGet_37f7630(param_1,*(undefined8 *)puVar1);
  if ((uVar3 & 1) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *param_1 != 0;
  }
  return bVar2;
}

