/* IL2CPP: Dino.BusSand.App.UI.KitBlink$$Awake
void Dino_BusSand_App_UI_KitBlink__Awake (Dino_BusSand_App_UI_KitBlink_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitBlink$$Awake
   void Dino_BusSand_App_UI_KitBlink__Awake (Dino_BusSand_App_UI_KitBlink_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitBlink__Awake_23332d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_04cad4c0;
  if ((bRam0000000004f9c62c & 1) == 0) {
                    /* try { // try from 024332f4 to 02533317 has its CatchHandler @ 02433438 */
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c62c = 1;
  }
  uVar2 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
                    /* try { // try from 0243331c to 0253331f has its CatchHandler @ 0243332c */
                    /* try { // try from 02433320 to 0253334b has its CatchHandler @ 02432f58 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 024331b0 with catch @ 02433324 */
                    /* catch() { ... } // from try @ 024331e4 with catch @ 02433328 */
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
                    /* catch() { ... } // from try @ 0243331c with catch @ 0243332c */
                    /* catch() { ... } // from try @ 024331fc with catch @ 02433330 */
                    /* catch() { ... } // from try @ 024331b8 with catch @ 02433334 */
  uVar2 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar2,0);
                    /* catch() { ... } // from try @ 02433194 with catch @ 02433338 */
  puVar3 = (undefined8 *)(param_1 + 0x20);
  *puVar3 = uVar2;
                    /* try { // try from 0243334c to 0253334f has its CatchHandler @ 024333b8 */
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                 ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

