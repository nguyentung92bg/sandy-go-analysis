/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$TryValidateName
bool Dino_BusSand_App_Meta_PlayerIdentity__TryValidateName (System_String_o* raw, System_String_o** clean, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$TryValidateName
   bool Dino_BusSand_App_Meta_PlayerIdentity__TryValidateName (System_String_o* raw,
   System_String_o** clean, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_PlayerIdentity__TryValidateName_226e4ec(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c0d4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae570);
    bRam0000000004f9c0d4 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_Meta_PlayerIdentity__SanitizeName_226e578(param_1);
  *param_2 = lVar2;
  thunk_FUN_02134474(param_2,lVar2);
  if (*param_2 != 0) {
    return 0 < *(int *)(*param_2 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

