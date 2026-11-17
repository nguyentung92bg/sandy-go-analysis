/* IL2CPP: Dino.BusSand.App.Meta.Profile$$AddInfiniteHearts
void Dino_BusSand_App_Meta_Profile__AddInfiniteHearts (int64_t seconds, System_String_o* reason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$AddInfiniteHearts
   void Dino_BusSand_App_Meta_Profile__AddInfiniteHearts (int64_t seconds, System_String_o* reason,
   const MethodInfo* method); */

void Dino_BusSand_App_Meta_Profile__AddInfiniteHearts_2273010(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
                    /* try { // try from 02373030 to 0247304b has its CatchHandler @ 02372d7c */
  if ((bRam0000000004f9c103 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04caa200);
                    /* try { // try from 0237304c to 0247304f has its CatchHandler @ 02373054 */
                    /* catch() { ... } // from try @ 02372ff4 with catch @ 02373050
                       try { // try from 02373050 to 0247307f has its CatchHandler @ 02372d7c */
                    /* catch() { ... } // from try @ 0237304c with catch @ 02373054 */
    FUN_02132f7c(PTR_DAT_04cabaf8);
                    /* catch() { ... } // from try @ 02372fe0 with catch @ 02373058 */
                    /* catch() { ... } // from try @ 02372fb4 with catch @ 0237305c */
    bRam0000000004f9c103 = 1;
  }
                    /* catch() { ... } // from try @ 02372fc4 with catch @ 02373060 */
  puVar1 = PTR_DAT_04cabaf8;
                    /* catch() { ... } // from try @ 02373000 with catch @ 02373064 */
  if (param_1 < 1) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02373080 to 02473083 has its CatchHandler @ 023730a4 */
  uVar3 = Dino_BusSand_App_Meta_Profile__Now_2271090();
                    /* try { // try from 02373084 to 024730a7 has its CatchHandler @ 02372d7c */
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
                    /* catch() { ... } // from try @ 02373080 with catch @ 023730a4 */
    cRam0000000004f9b894 = '\x01';
  }
                    /* try { // try from 023730a8 to 024730af has its CatchHandler @ 0237332c */
  lVar4 = *(long *)puVar1;
                    /* try { // try from 023730b0 to 024731c7 has its CatchHandler @ 02372d7c */
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
    lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(puVar1);
      lVar4 = *(long *)puVar1;
      cRam0000000004f9b894 = '\x01';
    }
  }
  else {
    lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(lVar4 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar4 = System_Math__Max_4830fd4(uVar5,uVar3,0);
    puVar2 = PTR_DAT_04cac5c0;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x38) = lVar4 + param_1;
      Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30();
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Analytics__Item_2174b5c(0x3ea,param_1,param_2,0);
      lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      if (lVar4 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x023731a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),0x3ea,*(undefined8 *)(lVar4 + 0x28))
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

