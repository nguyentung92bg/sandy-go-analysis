/* IL2CPP: Dino.BusSand.App.GameApp$$get_CanStartLevel
bool Dino_BusSand_App_GameApp__get_CanStartLevel (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$get_CanStartLevel
   bool Dino_BusSand_App_GameApp__get_CanStartLevel (const MethodInfo* method); */

bool Dino_BusSand_App_GameApp__get_CanStartLevel_2165d14(void)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9b85f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9b85f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_Meta_Profile__get_HasHeartToPlay_2272cc8(0);
  if ((uVar3 & 1) == 0) {
    bVar2 = *(char *)(*(long *)(*(long *)PTR_DAT_04cab380 + 0xb8) + 3) != '\0';
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

