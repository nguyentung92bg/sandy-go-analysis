/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$Prepared
bool Dino_BusSand_App_UI_KitPrefabs__Prepared (System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$Prepared
   bool Dino_BusSand_App_UI_KitPrefabs__Prepared (System_String_o* key, const MethodInfo* method);
    */

uint Dino_BusSand_App_UI_KitPrefabs__Prepared_2181f28(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lStack_18;
  
                    /* try { // try from 02281f38 to 02381f43 has its CatchHandler @ 02281fa0 */
  if ((bRam0000000004f9b931 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad5e0);
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b931 = 1;
  }
  puVar1 = PTR_DAT_04cac4f8;
  lStack_18 = 0;
  if (param_1 != 0) {
                    /* try { // try from 02281f7c to 02381f9b has its CatchHandler @ 02281f9c */
    lVar3 = *(long *)PTR_DAT_04cac4f8;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* catch() { ... } // from try @ 02281eb0 with catch @ 02281f9c
                       catch() { ... } // from try @ 02281f7c with catch @ 02281f9c
                       try { // try from 02281f9c to 02381fb3 has its CatchHandler @ 02281e18 */
                    /* catch() { ... } // from try @ 02281f38 with catch @ 02281fa0 */
    uVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (lVar3,param_1,&lStack_18,*(undefined8 *)PTR_DAT_04cad5e0);
    if (((uVar4 & 1) != 0) && (lStack_18 != 0)) {
      uVar5 = *(undefined8 *)(lStack_18 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
      goto LAB_02281ff4;
    }
  }
  uVar2 = 0;
LAB_02281ff4:
  return uVar2 & 1;
}

