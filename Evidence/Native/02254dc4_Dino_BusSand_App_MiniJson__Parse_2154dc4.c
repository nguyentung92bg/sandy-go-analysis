/* IL2CPP: Dino.BusSand.App.MiniJson$$Parse
Il2CppObject* Dino_BusSand_App_MiniJson__Parse (System_String_o* json, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.MiniJson$$Parse
   Il2CppObject* Dino_BusSand_App_MiniJson__Parse (System_String_o* json, const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_MiniJson__Parse_2154dc4(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  uVar1 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
                    /* try { // try from 02254df0 to 02354dfb has its CatchHandler @ 02254ea0 */
    uStack_14 = 0;
    uVar2 = Dino_BusSand_App_MiniJson__ParseValue_2154e04(param_1,&uStack_14);
  }
                    /* try { // try from 02254dfc to 02354ebf has its CatchHandler @ 02254db8 */
  return uVar2;
}

