/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_I
Dino_BusSand_App_Meta_PassportFeature_o* Dino_BusSand_App_Meta_PassportFeature__get_I (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_I
   Dino_BusSand_App_Meta_PassportFeature_o* Dino_BusSand_App_Meta_PassportFeature__get_I (const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_PassportFeature__get_I_22445dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cac668;
  if ((bRam0000000004f9bf36 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3958);
    FUN_02132f7c(PTR_DAT_04cac668);
                    /* try { // try from 02344610 to 02444617 has its CatchHandler @ 02344920 */
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf36 = 1;
  }
  puVar2 = PTR_DAT_04cb3958;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4(*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_04caef48;
                    /* try { // try from 02344644 to 0244469f has its CatchHandler @ 02344950 */
  if (lVar3 == 0) {
    lVar3 = *(long *)PTR_DAT_04caef48;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
  }
  return lVar3;
}

