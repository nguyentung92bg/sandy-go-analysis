/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider.<>c$$<Install>b__9_0
Dino_Common_Tracking_ITrackingProvider_o* Dino_BusSand_Sdk_SandBusTrackingProvider___c___Install_b__9_0 (Dino_BusSand_Sdk_SandBusTrackingProvider___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider.<>c$$<Install>b__9_0
   Dino_Common_Tracking_ITrackingProvider_o*
   Dino_BusSand_Sdk_SandBusTrackingProvider___c___Install_b__9_0
   (Dino_BusSand_Sdk_SandBusTrackingProvider___c_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Sdk_SandBusTrackingProvider___c___Install_b__9_0_243a5f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04cbf3d0;
                    /* try { // try from 0253a5f8 to 0263a603 has its CatchHandler @ 0253aaa4 */
  if ((bRam0000000004f9cc6c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
                    /* try { // try from 0253a618 to 0263a627 has its CatchHandler @ 0253ab30 */
    FUN_02132f7c(PTR_DAT_04cbf3d0);
    FUN_02132f7c(PTR_DAT_04cbf458);
    bRam0000000004f9cc6c = 1;
  }
                    /* try { // try from 0253a640 to 0263a643 has its CatchHandler @ 0253aa98 */
  lVar6 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
                    /* try { // try from 0253a644 to 0263a667 has its CatchHandler @ 0253aaf4 */
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28))
    ;
  }
                    /* try { // try from 0253a6cc to 0263a6d3 has its CatchHandler @ 0253ab40 */
  if (cRam0000000004f9cca5 == '\0') {
    FUN_02132f7c(PTR_DAT_04cbf3d0);
    cRam0000000004f9cca5 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  cVar3 = lVar6 != 0;
  *(char *)*(undefined8 *)(lVar4 + 0xb8) = cVar3;
  if (cRam0000000004f9cca6 == '\0') {
    FUN_02132f7c(puVar1);
    lVar4 = *(long *)puVar1;
                    /* try { // try from 0253a710 to 0263a71f has its CatchHandler @ 0253aae4 */
    cRam0000000004f9cca6 = '\x01';
    cVar3 = **(char **)(lVar4 + 0xb8);
  }
  puVar2 = PTR_DAT_04cbf458;
  if (cVar3 != '\0') {
                    /* try { // try from 0253a728 to 0263a72f has its CatchHandler @ 0253aadc */
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 0253a748 to 0263a74b has its CatchHandler @ 0253aa94 */
                    /* try { // try from 0253a74c to 0263a76f has its CatchHandler @ 0253aad8 */
    UnityEngine_Debug__Log_4360fc8(*(undefined8 *)puVar2,0);
    lVar4 = *(long *)puVar1;
  }
  uVar5 = thunk_FUN_0216e89c(lVar4);
  Dino_BusSand_Sdk_SandBusTrackingProvider___ctor_24391b0(uVar5,lVar6);
  return uVar5;
}

