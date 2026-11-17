/* IL2CPP: Dino.BusSand.App.UI.KitParts$$get_LifeAtStake
bool Dino_BusSand_App_UI_KitParts__get_LifeAtStake (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitParts$$get_LifeAtStake
   bool Dino_BusSand_App_UI_KitParts__get_LifeAtStake (const MethodInfo* method); */

bool Dino_BusSand_App_UI_KitParts__get_LifeAtStake_2310c28(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
                    /* catch() { ... } // from try @ 02410968 with catch @ 02410c28 */
  puVar1 = PTR_DAT_04cac458;
                    /* catch() { ... } // from try @ 02410a90 with catch @ 02410c2c */
                    /* catch() { ... } // from try @ 02410a54 with catch @ 02410c30 */
                    /* catch() { ... } // from try @ 02410a3c with catch @ 02410c34
                       catch() { ... } // from try @ 02410be8 with catch @ 02410c34 */
                    /* catch() { ... } // from try @ 02410a24 with catch @ 02410c38
                       catch() { ... } // from try @ 02410be4 with catch @ 02410c38 */
                    /* catch() { ... } // from try @ 0241099c with catch @ 02410c3c */
                    /* catch() { ... } // from try @ 02410928 with catch @ 02410c40 */
  if ((bRam0000000004f9c54d & 1) == 0) {
                    /* catch() { ... } // from try @ 024109f4 with catch @ 02410c44
                       catch() { ... } // from try @ 02410be0 with catch @ 02410c44 */
                    /* catch() { ... } // from try @ 024109c0 with catch @ 02410c48
                       catch() { ... } // from try @ 02410bc8 with catch @ 02410c48 */
                    /* catch() { ... } // from try @ 02410ab8 with catch @ 02410c4c
                       catch() { ... } // from try @ 02410bcc with catch @ 02410c4c
                       catch() { ... } // from try @ 02410bf0 with catch @ 02410c4c */
    FUN_02132f7c(PTR_DAT_04cab380);
                    /* catch() { ... } // from try @ 02410b34 with catch @ 02410c50
                       catch() { ... } // from try @ 02410bdc with catch @ 02410c50
                       catch() { ... } // from try @ 02410bfc with catch @ 02410c50 */
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cabaf8);
                    /* try { // try from 02410c6c to 02510c6f has its CatchHandler @ 02410c88 */
    bRam0000000004f9c54d = 1;
  }
                    /* try { // try from 02410c70 to 02510c8b has its CatchHandler @ 02410864 */
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
                    /* catch() { ... } // from try @ 02410c6c with catch @ 02410c88 */
                    /* try { // try from 02410c8c to 02510c93 has its CatchHandler @ 02410c9c */
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 2) != '\0') {
                    /* try { // try from 02410c94 to 02510c9f has its CatchHandler @ 02410864 */
                    /* catch() { ... } // from try @ 02410c8c with catch @ 02410c9c */
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_App_Meta_Profile__get_InfiniteHearts_2272a98(0);
    if ((uVar3 & 1) == 0) {
      return **(char **)(*(long *)PTR_DAT_04cab380 + 0xb8) == '\0';
    }
  }
  return false;
}

