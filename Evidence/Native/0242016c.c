/* IL2CPP: Dino.BusSand.App.UI.HomeQueue$$Ready
bool Dino_BusSand_App_UI_HomeQueue__Ready (Dino_BusSand_App_GameApp_o* app, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeQueue$$Ready
   bool Dino_BusSand_App_UI_HomeQueue__Ready (Dino_BusSand_App_GameApp_o* app, const MethodInfo*
   method); */

byte Dino_BusSand_App_UI_HomeQueue__Ready_232016c(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c5ab & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04cacc38);
    FUN_02132f7c(PTR_DAT_04cac518);
    FUN_02132f7c(PTR_DAT_04cac7c8);
    bRam0000000004f9c5ab = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  if ((uVar3 & 1) != 0) {
    if (param_1 == 0) goto LAB_02420328;
    bVar2 = 0;
    if (*(char *)(param_1 + 0x39) == '\0') goto LAB_024202b8;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_02420328;
      uVar3 = Dino_BusSand_App_UI_UIManager__AnyPopupOpen_21fef84(*(long *)(param_1 + 0x28),0);
      if ((uVar3 & 1) == 0) {
                    /* try { // try from 02420248 to 0252024b has its CatchHandler @ 02420298 */
                    /* try { // try from 0242024c to 0252024f has its CatchHandler @ 02420274 */
        if (*(int *)(*(long *)PTR_DAT_04cabb00 + 0xe4) == 0) {
                    /* try { // try from 02420250 to 02520253 has its CatchHandler @ 02420268 */
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 02420254 to 025202bb has its CatchHandler @ 0241fd04 */
        uVar3 = Dino_BusSand_App_UI_ScreenFade__get_Busy_2289848(0);
        if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 02420058 with catch @ 02420260 */
                    /* catch() { ... } // from try @ 0242006c with catch @ 02420264 */
          if (*(long *)(param_1 + 0x28) == 0) {
LAB_02420328:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
                    /* catch() { ... } // from try @ 02420250 with catch @ 02420268 */
                    /* catch() { ... } // from try @ 0242008c with catch @ 0242026c */
                    /* catch() { ... } // from try @ 0242004c with catch @ 02420270 */
                    /* catch() { ... } // from try @ 0242024c with catch @ 02420274 */
          uVar3 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                            (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac518);
                    /* catch() { ... } // from try @ 02420078 with catch @ 02420278 */
          if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 02420038 with catch @ 0242027c */
                    /* catch() { ... } // from try @ 02420008 with catch @ 02420280 */
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_02420328;
                    /* catch() { ... } // from try @ 0242002c with catch @ 02420284 */
                    /* catch() { ... } // from try @ 02420014 with catch @ 02420288 */
                    /* catch() { ... } // from try @ 02420110 with catch @ 0242028c */
                    /* catch() { ... } // from try @ 0241ffc4 with catch @ 02420290 */
            uVar3 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                              (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cacc38);
                    /* catch() { ... } // from try @ 0241ff58 with catch @ 02420294 */
            if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 02420248 with catch @ 02420298 */
                    /* catch() { ... } // from try @ 02420098 with catch @ 0242029c */
              if (*(long *)(param_1 + 0x28) == 0) goto LAB_02420328;
                    /* catch() { ... } // from try @ 0241fff4 with catch @ 024202a0 */
              uVar3 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                                (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac7c8);
              if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 024202bc with catch @ 024202c8 */
                    /* try { // try from 024202cc to 025202d3 has its CatchHandler @ 024202dc */
                uVar5 = Dino_BusSand_App_GameApp__get_Home_2169a38(param_1,0);
                    /* try { // try from 024202d4 to 025202df has its CatchHandler @ 0241fd04 */
                    /* catch() { ... } // from try @ 024202cc with catch @ 024202dc */
                    /* try { // try from 024202e0 to 025204bb has its CatchHandler @ 024202e0
                       catch() { ... } // from try @ 024202e0 with catch @ 024202e0
                       catch() { ... } // from try @ 024205c8 with catch @ 024202e0
                       catch() { ... } // from try @ 02420670 with catch @ 024202e0
                       catch() { ... } // from try @ 024206cc with catch @ 024202e0 */
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar1);
                }
                uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
                if ((uVar3 & 1) == 0) {
                  bVar2 = 1;
                }
                else {
                  lVar4 = Dino_BusSand_App_GameApp__get_Home_2169a38(param_1,0);
                  if (lVar4 == 0) goto LAB_02420328;
                  bVar2 = Dino_BusSand_App_UI_HomePanel__get_AtelierBusy_22e8fb4(lVar4,0);
                  bVar2 = bVar2 ^ 1;
                }
                goto LAB_024202b8;
              }
            }
          }
        }
      }
    }
  }
  bVar2 = 0;
LAB_024202b8:
                    /* try { // try from 024202bc to 025202bf has its CatchHandler @ 024202c8 */
  return bVar2 & 1;
}

