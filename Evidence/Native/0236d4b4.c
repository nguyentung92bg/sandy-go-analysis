/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$IsSourceValid
bool Dino_BusSand_App_Meta_PlayerIdentity__IsSourceValid (System_String_o* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$IsSourceValid
   bool Dino_BusSand_App_Meta_PlayerIdentity__IsSourceValid (System_String_o* source, const
   MethodInfo* method); */

bool Dino_BusSand_App_Meta_PlayerIdentity__IsSourceValid_226d4b4(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
                    /* try { // try from 0236d4c8 to 0246d4f3 has its CatchHandler @ 0236d8c0 */
  if ((bRam0000000004f9c0cb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04caef48);
    FUN_02132f7c(PTR_DAT_04cb4770);
                    /* try { // try from 0236d4f4 to 0246d517 has its CatchHandler @ 0236d808 */
    bRam0000000004f9c0cb = 1;
  }
  uVar2 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  if (((uVar2 & 1) == 0) &&
     (uVar2 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cb4770,0),
     (uVar2 & 1) != 0)) {
                    /* try { // try from 0236d524 to 0246d557 has its CatchHandler @ 0236d8bc */
    if (*(int *)(*(long *)PTR_DAT_04caef48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = Dino_BusSand_App_Meta_PassportFeature__get_I_22445dc(0);
    bVar1 = false;
    if (lVar3 != 0) {
      lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (lVar3,*(undefined8 *)PTR_DAT_04cb01b0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      bVar1 = *(int *)(lVar3 + 0x14) != 0;
                    /* try { // try from 0236d564 to 0246d5af has its CatchHandler @ 0236d8c0 */
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

