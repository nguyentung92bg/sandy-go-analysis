/* IL2CPP: Dino.BusSand.App.Iap.StorePriceLookup$$.ctor
void Dino_BusSand_App_Iap_StorePriceLookup___ctor (Dino_BusSand_App_Iap_StorePriceLookup_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Iap.StorePriceLookup$$.ctor
   void Dino_BusSand_App_Iap_StorePriceLookup___ctor (Dino_BusSand_App_Iap_StorePriceLookup_o*
   __this, Il2CppObject* object, intptr_t method, const MethodInfo* method); */

void Dino_BusSand_App_Iap_StorePriceLookup___ctor_217c5a8(long param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar3 = *(undefined8 *)(param_3 + 8);
                    /* try { // try from 0227c5bc to 0237c5ff has its CatchHandler @ 0227c568 */
  *(long *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(long *)(param_1 + 0x20) = param_2;
  thunk_FUN_02134474();
  cVar1 = *(char *)(param_3 + 0x52);
  *(long *)(param_1 + 0x40) = param_1;
  uVar2 = FUN_02133080(param_3);
                    /* catch() { ... } // from try @ 0227c598 with catch @ 0227c5e4 */
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\x02') {
      if (param_2 == 0) {
        uVar3 = thunk_FUN_0217bb8c(0,&UNK_00e5b8f7);
                    /* try { // try from 0227c654 to 0237c673 has its CatchHandler @ 0227c698 */
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar3,0);
      }
      goto LAB_0227c618;
    }
    pcVar4 = FUN_01e78128;
  }
  else {
    if (cVar1 != '\x03') {
LAB_0227c618:
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
      goto LAB_0227c628;
    }
    pcVar4 = FUN_01e7814c;
  }
  *(code **)(param_1 + 0x18) = pcVar4;
LAB_0227c628:
                    /* try { // try from 0227c630 to 0237c653 has its CatchHandler @ 0227c630
                       catch() { ... } // from try @ 0227c630 with catch @ 0227c630
                       catch() { ... } // from try @ 0227c674 with catch @ 0227c630 */
  *(code **)(param_1 + 0x38) = FUN_01e780bc;
  return;
}

