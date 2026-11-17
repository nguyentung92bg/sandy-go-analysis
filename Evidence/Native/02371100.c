/* IL2CPP: Dino.BusSand.App.Meta.Profile$$Day
int64_t Dino_BusSand_App_Meta_Profile__Day (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$Day
   int64_t Dino_BusSand_App_Meta_Profile__Day (const MethodInfo* method); */

long Dino_BusSand_App_Meta_Profile__Day_2271100(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0f1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0f1 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_Meta_Profile__Now_2271090();
  return lVar2 / 0x15180;
}

