/* IL2CPP: Dino.BusSand.App.UI.BonusBankOpenPanel$$Finish
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BonusBankOpenPanel__Finish (Dino_BusSand_App_UI_BonusBankOpenPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BonusBankOpenPanel$$Finish
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BonusBankOpenPanel__Finish
   (Dino_BusSand_App_UI_BonusBankOpenPanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_BonusBankOpenPanel__Finish_21cc0ec(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb0180;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cc0d8 with catch @ 022cc108
                        */
  if ((bRam0000000004f9bb1e & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cc070 with catch @ 022cc10c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cc028 with catch @ 022cc110
                        */
    FUN_02132f7c(PTR_DAT_04cb0180);
    bRam0000000004f9bb1e = 1;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cc01c with catch @ 022cc120
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cc060 with catch @ 022cc124
                       catch(type#1 @ 00000000) { ... } // from try @ 022cc0b0 with catch @ 022cc124
                        */
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cc000 with catch @ 022cc134
                        */
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
                    /* try { // try from 022cc148 to 023cc14f has its CatchHandler @ 022cc158 */
                    /* try { // try from 022cc150 to 023cc15b has its CatchHandler @ 022cbfdc */
  return lVar2;
}

