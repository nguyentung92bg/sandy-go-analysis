/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$BounceSoundLoop
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingPanel__BounceSoundLoop (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$BounceSoundLoop
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingPanel__BounceSoundLoop
   (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_YachtRacingPanel__BounceSoundLoop_21edd98(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb1248;
  if ((bRam0000000004f9bc03 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1248);
    bRam0000000004f9bc03 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022edd70 with catch @ 022eddd8
                        */
  System_Object___ctor_4870e5c(lVar2,0);
                    /* try { // try from 022edddc to 023ede8b has its CatchHandler @ 022edddc
                       catch() { ... } // from try @ 022edddc with catch @ 022edddc
                       catch() { ... } // from try @ 022ede94 with catch @ 022edddc */
  *(undefined4 *)(lVar2 + 0x10) = 0;
  return lVar2;
}

