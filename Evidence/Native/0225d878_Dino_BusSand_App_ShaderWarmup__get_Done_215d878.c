/* IL2CPP: Dino.BusSand.App.ShaderWarmup$$get_Done
bool Dino_BusSand_App_ShaderWarmup__get_Done (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.ShaderWarmup$$get_Done
   bool Dino_BusSand_App_ShaderWarmup__get_Done (const MethodInfo* method); */

bool Dino_BusSand_App_ShaderWarmup__get_Done_215d878(void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  char *pcVar4;
  
  puVar1 = PTR_DAT_04cabee0;
  if ((bRam0000000004f9b806 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabee0);
    bRam0000000004f9b806 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  pcVar4 = *(char **)(lVar3 + 0xb8);
  if (pcVar4[0x10] == '\0') {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      pcVar4 = *(char **)(*(long *)puVar1 + 0xb8);
    }
    bVar2 = *pcVar4 == '\0';
  }
  else {
    bVar2 = true;
                    /* try { // try from 0225d8cc to 0235d8ff has its CatchHandler @ 0225d954 */
  }
  return bVar2;
}

