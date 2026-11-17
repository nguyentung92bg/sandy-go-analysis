/* IL2CPP: Dino.BusSand.App.GameApp$$RunHallQueue
System_Collections_IEnumerator_o* Dino_BusSand_App_GameApp__RunHallQueue (Dino_BusSand_App_GameApp_o* __this, bool fromGame, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$RunHallQueue
   System_Collections_IEnumerator_o* Dino_BusSand_App_GameApp__RunHallQueue
   (Dino_BusSand_App_GameApp_o* __this, bool fromGame, const MethodInfo* method); */

long Dino_BusSand_App_GameApp__RunHallQueue_2169ad4(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cac858;
                    /* catch() { ... } // from try @ 022695b4 with catch @ 02269ad8 */
                    /* catch() { ... } // from try @ 02269558 with catch @ 02269adc */
                    /* catch() { ... } // from try @ 02269550 with catch @ 02269af4 */
                    /* catch() { ... } // from try @ 022694ec with catch @ 02269af8 */
  if ((bRam0000000004f9b875 & 1) == 0) {
                    /* catch() { ... } // from try @ 022697c4 with catch @ 02269afc */
                    /* catch() { ... } // from try @ 022694b4 with catch @ 02269b00 */
    FUN_02132f7c(PTR_DAT_04cac858);
                    /* catch() { ... } // from try @ 022697d4 with catch @ 02269b08
                       catch() { ... } // from try @ 022699b8 with catch @ 02269b08 */
    bRam0000000004f9b875 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_GameApp__RunHallQueue_d__119___ctor_2172268(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x28) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_1);
    *(byte *)(lVar2 + 0x20) = param_2 & 1;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

