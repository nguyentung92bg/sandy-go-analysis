/* IL2CPP: Dino.BusSand.App.UI.KitToggle$$Refresh
void Dino_BusSand_App_UI_KitToggle__Refresh (Dino_BusSand_App_UI_KitToggle_o* __this, bool animate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitToggle$$Refresh
   void Dino_BusSand_App_UI_KitToggle__Refresh (Dino_BusSand_App_UI_KitToggle_o* __this, bool
   animate, const MethodInfo* method); */

long Dino_BusSand_App_UI_KitToggle__Refresh_22875b8(long param_1,ulong param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04cb5000;
  if ((bRam0000000004f9c164 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb5008);
    FUN_02132f7c(PTR_DAT_04cb5010);
    FUN_02132f7c(PTR_DAT_04cb5000);
    bRam0000000004f9c164 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x10) = param_1;
    thunk_FUN_02134474((long *)(lVar4 + 0x10),param_1);
    lVar7 = *(long *)(param_1 + 0x40);
    if (lVar7 == 0) {
      bVar3 = 0;
    }
    else {
      bVar3 = (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
    }
    bVar3 = bVar3 & 1;
    *(byte *)(lVar4 + 0x18) = bVar3;
    if ((((param_2 & 1) != 0) && (*(char *)(param_1 + 0x49) != '\0')) &&
       (*(byte *)(param_1 + 0x48) != bVar3)) {
      uVar5 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0);
      puVar2 = PTR_DAT_04cad568;
      bVar3 = *(byte *)(lVar4 + 0x18);
      if ((uVar5 & 1) != 0) {
        *(byte *)(param_1 + 0x48) = bVar3;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b94e == '\0') {
          FUN_02132f7c(PTR_DAT_04cad568);
          cRam0000000004f9b94e = '\x01';
        }
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar2;
        }
        if (**(long **)(lVar7 + 0xb8) != 0) {
          Dino_BusSand_GameAudio__Toggle_23835f0
                    (**(long **)(lVar7 + 0xb8),*(undefined1 *)(lVar4 + 0x18),0);
        }
                    /* try { // try from 02387720 to 02487723 has its CatchHandler @ 02387740 */
                    /* try { // try from 02387724 to 02487757 has its CatchHandler @ 02387588 */
        if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02387720 with catch @ 02387740
                        */
        Dino_BusSand_App_Tween__KillAll_2161a90(param_1,0);
        uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
                    /* try { // try from 02387758 to 0248776f has its CatchHandler @ 023877c4 */
        System_Action_float____ctor_35f1448(uVar6,lVar4,*(undefined8 *)PTR_DAT_04cb5008,0);
                    /* try { // try from 02387770 to 024877b3 has its CatchHandler @ 02387588 */
        lVar7 = Dino_BusSand_App_Tween__Value_2160f64(_UNK_00e20aec,uVar6,0);
        if ((lVar7 != 0) &&
           (lVar7 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar7,1,0), lVar7 != 0)) {
          lVar7 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar7,param_1,0);
                    /* try { // try from 023877b4 to 024877c3 has its CatchHandler @ 023877c4 */
          uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    /* catch() { ... } // from try @ 02387758 with catch @ 023877c4
                       catch() { ... } // from try @ 023877b4 with catch @ 023877c4 */
                    /* try { // try from 023877c8 to 024877cb has its CatchHandler @ 023877d4 */
                    /* try { // try from 023877cc to 024877d7 has its CatchHandler @ 02387588 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023877c8 with catch @ 023877d4
                        */
          System_Action___ctor_47b5ed0(uVar6,lVar4,*(undefined8 *)PTR_DAT_04cb5010,0);
          if (lVar7 != 0) {
            *(undefined8 *)(lVar7 + 0x40) = uVar6;
            thunk_FUN_02134474((undefined8 *)(lVar7 + 0x40),uVar6,0);
            return lVar7;
          }
        }
        goto LAB_0238782c;
      }
    }
    lVar7 = Dino_BusSand_App_UI_KitToggle__Apply_2287838(0x3f800000,param_1,bVar3 != 0);
    uVar1 = *(undefined1 *)(lVar4 + 0x18);
    *(undefined1 *)(param_1 + 0x49) = 1;
    *(undefined1 *)(param_1 + 0x48) = uVar1;
    return lVar7;
  }
LAB_0238782c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

